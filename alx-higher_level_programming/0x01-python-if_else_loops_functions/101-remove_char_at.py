#!/usr/bin/python3
def remove_char_at(str, n):
    myStr = ""
    for i in range(len(str)):
        if i != n:
            myStr += str[i]
    return myStr
