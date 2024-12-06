#!/usr/bin/python3
def roman_to_int(roman_string):
    exp = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000,
    }
    total = 0
    for i in range(len(roman_string)):
        current = exp[roman_string[i]]
        nxt = exp[romand_string[i + 1]] if i + 1 < len(roman_string) else None
        if current < nxt:
            total -= current
        else:
            total += current
    return total            
