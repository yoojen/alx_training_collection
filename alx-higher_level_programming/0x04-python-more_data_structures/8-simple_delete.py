#!/usr/bin/python3
def simple_delete(a_dictionary, key=""):
    ky = str(key)
    if ky not in a_dictionary:
        return a_dictionary
    else:
        a_dictionary.pop(ky)
        return a_dictionary
