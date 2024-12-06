#!/usr/bin/python3
def uppercase(str):
    for w in str:
        w = ord(w)
        if w >= 97 and w <= 122:
            w = w - 32
        w = chr(w)
        print("{}".format(w), end="")
    print("")
