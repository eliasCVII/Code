from random import randint

def random_num():
    number = randint(1, 20)
    name = input("Welcome, what's your name?: ")
    print("hello,", name)
    print("Im thinking a number from 1 to 20...")
    guess = int(input("whats your guess?: "))

    while guess:
        if guess == number:
            print('correct!, the number was', number)
            break
        elif guess > number:
            print('lower')
        else:
            print('higher')
        guess = int(input('guess again: '))

print(random_num())