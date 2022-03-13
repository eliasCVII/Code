from random import randint
from math import sqrt

def algebraic():
    while True:
        j = randint(-100, 100)
        if 2 * j + 5 == 13:
            print(f"x = {j}")
            break

def g(x):
    return 6*x**3 + 31*x**2 + 3*x - 10

def plug():
    x = -100
    while x < 100:
        if g(x) == 0:
            print("x =", x)
        x += 1
    print('done.')

def first_degree():
    a = 1/2
    b = 2/3
    c = 1/5
    d = 7/8
    x = (d - b) / (a - c)
    print(x)

def quad(a,b,c):
    x1 = (-b + sqrt(b**2 - 4*a*c))/(2*a)
    x2 = (-b - sqrt(b**2 - 4*a*c))/(2*a)
    return x1,x2

def f(x):
  return 6*x**3 + 31*x**2 + 3*x - 10

def average(a,b):
	return (a + b) / 2.0

def guess():
	lower = -1
	upper = 0
	for i in range(100):
		midpt = average(lower,upper)
		if f(midpt) == 0:
			return midpt
		elif f(midpt) <= 0:
			upper = midpt
		else:
			lower = midpt
	return midpt

#x = guess()
#print(x,f(x)) 

print(quad(2,7,-15))
