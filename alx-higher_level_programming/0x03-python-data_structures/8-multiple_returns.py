#!/usr/bin/python3
def multiple_returns(sentence):
    if len(sentence) <= 0:
        slen = 0
        f_char = "None"
        tuple_rs = slen, f_char
        return tuple_rs
    else:
        slen = len(sentence)
        f_char = sentence[0]
        tuple_rs = slen, f_char
        return tuple_rs
