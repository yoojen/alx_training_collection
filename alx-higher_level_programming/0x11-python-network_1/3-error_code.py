#!/usr/bin/python3
"""
request and handle error exception
"""

if __name__ == '__main__':
    import urllib.request
    import urllib.error
    import sys
    my_url = sys.argv[1]

    req = urllib.request.Request(my_url)
    try:
        with urllib.request.urlopen(req) as response:
            info = response.read()
            print(info.decode("ascii"))
    except urllib.error.HTTPError as e:
        print("Error code: {}".format(e.code))
