#!/usr/bin/python3
"""
change json format format to python object
"""
import json


def from_json_string(my_str):
    """transform json format to python object"""
    return json.loads(my_str)
