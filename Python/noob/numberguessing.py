from random import randint
from pytermgui import tim

def random_num():
    number = randint(1, 10)
    name = input("Welcome, what's your name?: ")
    print("hello,", name)
    print("Im thinking a number from 1 to 10...")
    guess = int(input("whats your guess?: "))

    while guess:
        if guess == number:
            tim.print("[/dim /italic bold !rainbow]Correct!, the number was", number)
            break
        elif guess > number:
            print('lower')
        else:
            print('higher')
        guess = int(input('guess again: '))

print(random_num())
