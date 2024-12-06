#!/usr/bin/python3
"""
Send Post Parameter to provided link
"""

if __name__ == '__main__':
    import urllib.request
    import sys
    url = sys.argv[1]
    email = {"email": sys.argv[2]}
    data = urllib.parse.urlencode(email)
    data = data.encode("ascii")
    req = urllib.request.Request(url, data)
    with urllib.request.urlopen(req) as response:
        info = response.read()
    print(info.decode("ascii"))
