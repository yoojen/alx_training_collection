#!/usr/bin/python3
"""
load json file to python
"""
import json


def load_from_json_file(filename):
    """read json file"""
    with open(filename) as f:
        return json.load(f)
