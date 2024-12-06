#!/usr/bin/python3
"""
fetch url using request package
"""

if __name__ == '__main__':
    import requests

    contents = requests.get("https://intranet.hbtn.io/status")
    print("Body response:")
    print("\t- type: {}".format(contents.text.__class__))
    print("\t- content: {}".format(contents.text))
