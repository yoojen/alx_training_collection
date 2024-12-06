#!/usr/bin/python3
"""
post request using request package
"""

if __name__ == '__main__':
    import requests
    import sys
    args = {"email": sys.argv[2]}
    req = requests.post(sys.argv[1], data=args)
    print(req.text)
