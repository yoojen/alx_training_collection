#!/usr/bin/python3

"""
this kind of module print new line if it finds any delimeter
"""


def text_indentation(text):
    """ indent input text as some delimeters found """
    if type(text) is not str:
        raise TypeError("text must be a string")
    for i in range(len(text)):
        if text[i] in ".?:":
            print("{}\n".format(text[i]))
            while i + 1 < len(text) and text[i + 1] == " ":
                i += 1
        else:
            print("{}".format(text[i]), end="")
