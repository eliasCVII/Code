def average(a,b):
    return (a + b) / 2
def sqr_root(num,low,high):
    for i in range(20):
      guess=average(low,high)
      if guess**2 == num:
          print(guess)
      elif guess**2 > num:
          high = guess
      else:
          low = guess

    print(guess)
    
sqr_root(200, 10,15)
