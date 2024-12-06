#!/usr/bin/python3

"""
takes your GitHub credentials-
display ID using api.github.com/user
"""

if __name__ == '__main__':
    import sys
    import requests
    username = sys.argv[1]
    password = sys.argv[2]
    credentials = (username, password)
    req = requests.get("https://api.github.com/user", auth=credentials)
    try:
        print(req.json()['id'])
    except Exception:
        print('None')
