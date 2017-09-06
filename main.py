import parse

if __name__ == "__main__":
    request_object = parse.RequestData("MatheusMiranda",59648,59648)
    parse_object = parse.ParseData()

    a = request_object.get_codeforces_submissions()
    parse_object.parse_codeforces_information(a.read())

