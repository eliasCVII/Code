#!/usr/bin/env python3

#for i, one_letter in enumerate('abcd'):
#    print(f"{i}: {one_letter}")
def hex_output():
    decnum = 0
    hexnum = input('Enter hex number: ')
    for power, digit in enumerate(reversed(hexnum)):
        decmun += int(digit, 16) * (16 ** power)
        print(decnum)

def mysum(*args):
    total = 0
    for one_num in args:
        total += one_num
    return total
print(mysum(1.5, 5, 8, 55))
