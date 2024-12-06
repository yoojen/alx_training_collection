#!/usr/bin/python3
def safe_print_division(a, b):
    rs = None
    try:
        rs = a / b
    except (TypeError, ValueError, ZeroDivisionError):
        return None
    finally:
        print("Inside result: {}".format(rs))
    return rs
