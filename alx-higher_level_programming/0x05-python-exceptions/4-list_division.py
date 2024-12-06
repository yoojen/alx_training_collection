#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    rs = 0
    new_list = []
    for j in range(list_length):
        try:
            rs = my_list_1[j] / my_list_2[j]
        except TypeError:
            rs = 0
            print("wrong type")
        except ZeroDivisionError:
            print("division by 0")
            rs = 0
        except IndexError:
            rs = 0
            print("out of range")
        finally:
            new_list.append(rs)
    return new_list
