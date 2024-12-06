#!/usr/bin/python3
"""
append content to the file
"""


def append_write(filename="", text=""):
    """returns the numbe of items that is appended"""
    with open(filename, "a", encoding="utf-8") as f:
        return f.write(text)
