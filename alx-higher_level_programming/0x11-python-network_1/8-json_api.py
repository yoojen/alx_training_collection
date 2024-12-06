#!/usr/bin/python3

"""post request from command line"""

if __name__ == '__main__':
    import requests
    import sys
    try:
        arg = sys.argv[1]
    except Exception:
        arg = ""
    q = {"q": arg}
    req = requests.post("http://0.0.0.0:5000/search_user", data=q)
    try:
        result = req.json()
    except Exception:
        print("Not a valid JSON")
        exit()
    try:
        print("[{}] {}".format(result['id'], result['name']))
    except Exception:
        print("No result")
