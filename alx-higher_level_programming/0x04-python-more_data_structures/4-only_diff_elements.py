#!/usr/bin/python3
def only_diff_elements(set_1, set_2):
    on_1 = (set_1 - set_2)
    on_2 = (set_2 - set_1)
    rs = on_1.union(on_2)
    return rs
