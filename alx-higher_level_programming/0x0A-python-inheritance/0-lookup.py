#!/usr/bin/python3
"""
this lookup functions return all availble attr and method for an object
"""


def lookup(obj):
    """ returns available attributes and method for each obj """
    return (dir(obj))
