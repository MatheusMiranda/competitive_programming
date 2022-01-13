#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string,string> dic;

int main(){

				dic["brasil"] = "Feliz Natal!";
				dic["alemanha"] = "Frohliche Weihnachten!";
				dic["austria"] = "Frohe Weihnacht!";
				dic["coreia"] = "Chuk Sung Tan!";
				dic["espanha"] = "Feliz Navidad!";
				dic["grecia"] = "Kala Christougena!";
				dic["estados-unidos"] = "Merry Christmas!";
				dic["inglaterra"] = "Merry Christmas!";
				dic["australia"] = "Merry Christmas!";
				dic["portugal"] = "Feliz Natal!";
				dic["suecia"] = "God Jul!";
				dic["turquia"] = "Mutlu Noeller";
				dic["argentina"] = "Feliz Navidad!";
				dic["chile"] = "Feliz Navidad!";
				dic["mexico"] = "Feliz Navidad!";
				dic["antardida"] = "Merry Christmas!";
				dic["canada"] = "Merry Christmas!";
				dic["irlanda"] = "Nollaig Shona Dhuit!";
				dic["belgica"] = "Zalig Kerstfeest!";
				dic["italia"] = "Buon Natale!";
				dic["libia"] = "Buon Natale!";
				dic["siria"] = "Milad Mubarak!";
				dic["marrocos"] = "Milad Mubarak!";
				dic["japao"] = "Merii Kurisumasu!";

				string palavra;

				while(cin >> palavra){
							if(dic[palavra] == "") printf("--- NOT FOUND ---\n");
							else printf("%s\n",dic[palavra].c_str());

				}				
		return 0;
}
