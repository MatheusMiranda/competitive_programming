import json
import re
import copy
from urllib.request import urlopen
from pprint import pprint

#TODO Create cache files to avoid doing desnecessary requisitions
#TODO Use cache to avoid open uri problems that were already cached
#TODO In URI problems links "en" is a problem if the user choose another language
#TODO Make RequestData's methods static, in order to avoid desnecessary instantiations or define a Class variable to ParseData

class RequestData:
    """Class that make requests of html pages in online judges"""

    CODEFORCES_BASE_API_URL =  "http://codeforces.com/api/user.status?handle="
    UVA_ONLINE_JUDGE_BASE_URL = "https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_authorstats&userid="
    URI_ONLINE_JUDGE_BASE_URL =  "https://www.urionlinejudge.com.br/judge/en/profile/"

    def __init__(self,codeforces_username,uva_id,uri_id):
        self.codeforces_username = str(codeforces_username)
        self.uva_id = str(uva_id)
        self.uri_id = str(uri_id)
        self.codeforces_url = self.CODEFORCES_BASE_API_URL + self.codeforces_username + "&from=1&count=1000"
        self.uva_url = self.UVA_ONLINE_JUDGE_BASE_URL + self.uva_id
        self.uri_url = self.URI_ONLINE_JUDGE_BASE_URL + self.uri_id

    def get_codeforces_submissions(self):
        """Get user's submissions data, in json format, from Codeforces API"""
        assert(self.codeforces_url != None)
        codeforces_page_response = urlopen(self.codeforces_url)
        if codeforces_page_response.status != 200:
            raise BaseException("Error while connecting to url: %s" % self.codeforces_url)
        return codeforces_page_response

    def get_uri_profile_page(self):
        """Get user profile page from URI"""
        assert(self.uri_url != None)
        uri_page_response = urlopen(self.uri_url)
        if uri_page_response.status != 200:
            raise BaseException("Error while connecting to url: %s" % self.uri_url)
        return uri_page_response     

class ParseData:
    """Class that parse information from pages"""

    def __init__(self):
        self.uri_problems = {}
        self.codeforces_problems = {}
        self.cont = 0

    def parse_codeforces_information(self,solved_problems_bytes):
        solved_problems_string = solved_problems_bytes.decode('utf-8')
        solved_problems_hash = json.loads(solved_problems_string)
        self.filter_hash_data(solved_problems_hash)

    def filter_hash_data(self,solved_problems_hash):   
        """Filter data from hash to use"""
        invalid_contestId = 100796

        for submission_description in solved_problems_hash['result']:
            if submission_description['verdict'] == 'OK' and submission_description['contestId'] != invalid_contestId:
                name = str(submission_description['problem']['contestId']) + submission_description['problem']['index']
                self.codeforces_problems[name] = submission_description['problem']['tags']

        for question_number,question_tags in self.codeforces_problems.items():
            print("Question: ",question_number)
            print("Tags: ",question_tags,"\n")

    def parse_uri_information(self,uri_profile_page):
        #TODO change name to 'clean information' or somathing like that
        NO_TABS_PATTERN = {'pattern': '\n|\t|\r','repl': '',}
        NO_SPACES_PATTERN = {'pattern': '> +<','repl': '',}
        dirty_profile_page = uri_profile_page.decode('utf-8')
        no_tabs_profile_page = re.sub(string=dirty_profile_page, **NO_TABS_PATTERN) 
        profile_page = re.sub(string=no_tabs_profile_page, **NO_SPACES_PATTERN)
        return profile_page

    def update_url(self,uri_url):
        if(uri_url[len(uri_url) -1] == '='):
            return uri_url
        else:
            return self.update_url(uri_url[:-1])

    def filter_uri_profile_page_data(self,profile_page):
        #TODO Modularize this method and check if it's necessary do requisition at main.py script
        """Find number of pages containing solved problems, navegate between pages and for each problem find its subject."""

        profile_page = self.parse_uri_information(profile_page)

        MATCH_NUMBERS_PATTERN = r'id="table-info"> *(\d+) of (\d+)'
        pages = re.search(MATCH_NUMBERS_PATTERN,profile_page)
        total_number_pages = int(pages.group(2))
        requestor = RequestData("MatheusMiranda",59648,59648)
        requestor.uri_url += "?page=i"
        
        for i in range(1,total_number_pages + 1):
            requestor.uri_url = self.update_url(requestor.uri_url[:-1])
            requestor.uri_url = requestor.uri_url + str(i)
    
            dirty_page_i = requestor.get_uri_profile_page().read()
            page_i = self.parse_uri_information(dirty_page_i)
            self.find_uri_problems_subjects(page_i)

        for question_number,question_subject in self.uri_problems.items():
            print("Question number: ",question_number)
            print("Question subject: ",question_subject,"\n")

    def find_uri_problems_subjects(self,page):

        MATCH_PROBLEMS_LINKS = r'/judge/en/problems/view/(\d+)'
        MATCH_PROBLEM_SUBJECT = r'target="_blank">(Mathematics|Ad-Hoc|Beginner|Strings|Data Structures and Libraries|Paradigms|Graph|Computational Geometry)'
        uri_base_url = "https://urionlinejudge.com.br/judge/en/problems/view/"

        problems_numbers = re.findall(MATCH_PROBLEMS_LINKS,page)
        problems_numbers = list(set(problems_numbers))

        for problem_number in problems_numbers:
            problem_link = uri_base_url + problem_number
            problem_page = urlopen(problem_link).read().decode('utf-8')
            
            subject = re.search(MATCH_PROBLEM_SUBJECT,problem_page).group(1)
            self.uri_problems[problem_number] = subject

