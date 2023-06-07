import random 
number = random.randint(10, 30)
def greet():
    name = input("What's your name?: ").title()
    print(f"Hello {name}. Welcome to the number guessing game.\nI've chosen a number from 10 to 30\nYou must pick a number wisely!")

greet()

def guessing():
    user_number = int(input("\nType your number: "))
    while True:
        if user_number == number:
            print('Correct!', f'the number was {number}')
            break
        if user_number > number:
            print('too high...')
            user_number = int(input("guess again: "))
        elif user_number < number:
            print('too low...')
            user_number = int(input("guess again: "))
guessing()