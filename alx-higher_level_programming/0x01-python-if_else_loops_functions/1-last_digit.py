#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
num = str(number)
toInt = int(num[-1])
if number < 0:
    toInt = toInt * -1
if toInt > 5:
    print("Last digit of {} is {} and is greater than 5"
          .format(number, toInt))
elif toInt == 0:
    print("Last digit of {} is {} and is 0".format(number, toInt))
elif toInt < 6 and toInt != 0:
    print("Last digit of {} is {} and is less than 6 and not 0"
          .format(number, toInt))
