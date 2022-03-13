import random
place = random.randint(1,3)

def greet():
    print("Welcome to the alien faggot killer game!")
    print("Pick a number from 1 to 3")
    print("you only have 2 tries...")

def main_game():
    space = ["[ ]", "[ ]", "[ ]"]
#    alien_is_in = place
    points = 0
    tries = 0
    while True:
        if place == 1:
            space.append('x')
        elif place == 2:
            space.append('x')
        elif place == 3:
            space.append('x')

        user_guess = int(input("Type in your number: \n [?] [?] [?]: "))
        if user_guess == place:
            print("you got him!")
            print(f"the alien was in place {place} \n")
            points += 5
            tries += 1
            break
        else:
            print("miss, you lose 5 points nigga")
            points = points -5
            tries += 1
    print(f'you ended up with {points} points in only {tries} tries bitch')

greet()
main_game()
