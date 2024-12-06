#!/usr/bin/python3
"""
fetch from command line and print value of variable
"""

if __name__ == '__main__':
    import requests
    import sys
    response = requests.get(sys.argv[1])
    print(response.headers.get('X-Request-Id'))
