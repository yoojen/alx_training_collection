#!/usr/bin/python3
"""
write content to the file specified by the user
"""


def write_file(filename="", text=""):
    """create file if doesn't exist"""
    with open(filename, "w", encoding="utf-8") as f:
        return f.write(text)
