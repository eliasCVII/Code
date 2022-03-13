import random
NUM_DIGITS = 3
MAX_GUESSES = 10

def main():
    print(f"""
I'm thinking of a {NUM_DIGITS}-digit number
Pico means one digit is correct but in the wrong place
Fermi means one digit is correct in the right place
Bagels means no digit is correct.
    """)
    while True: # main game loop
        secretNum =  getSecretNum()
        print('I have tought up a number')
        print(f'You have {MAX_GUESSES} guesses to get it right')
        numGuesses = 1
        while numGuesses <= MAX_GUESSES:
            guess = ''
            # keeps looping
            while len(guess) != NUM_DIGITS or not guess.isdecimal():
                print('Guess #{numGuesses}: ')
                guess = input('> ')

            clues = getClues(guess, secretNum)
            print(clues)
            numGuesses += 1
            if guess == secretNum:
                break # break if correct
            if numGuesses > MAX_GUESSES:
                print('noob')
                print(f'the answer was {secretNum}')

        print('Play again? (y or n)' )
        if not input('> ').lower().startswith('y'):
            break
    print('Thanks for playing')

def getSecretNum():
    """Returns a string made up of NUM_DIGITS unique random digits."""
    numbers = list('0123456789')
    random.shuffle(numbers)
    secretNum = ''
    for i in range(NUM_DIGITS):
        secretNum += str(numbers[i])
    return secretNum

def getClues(guess, secretNum):
    if guess == secretNum:
        return 'You got it'
    clues = []

    for i in range(len(guess)):
        if guess[i] == secretNum[i]:
            clues.append('Fermi')
        elif guess[i] in secretNum:
            clues.append('Pico')
    if len(clues) == 0:
        return 'Bagels'
    else:
        clues.sort()
        return ' '.join(clues)

if __name__ == '__main__':
    main()
    
