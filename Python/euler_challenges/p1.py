#!/usr/bin/env python3
x = 0
for i in range(1, 1000):
    if i % 3 == 0 or i % 5 == 0: # if the reminder is 0 it will add it to x and sum all of those values.
        x += 1
print(x)
