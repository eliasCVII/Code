#!/usr/bin/env python3
def greetings(username):
    print(f'hello {username.title()}!')

def display_message():
    print('hello fags, im learning how to use functions!')
def fav_book(book):
    print(f'my fav book is {book.title()}')
def describe_pet(pet_name, animal_type='dog'):
    """Display info about pet"""
    print(f'\nI have a {animal_type}')
    print(f"\nMy {animal_type}'s name is {pet_name}")
describe_pet(pet_name='larry')
