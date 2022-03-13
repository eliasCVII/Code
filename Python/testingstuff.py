def odd_number():
    n = 1
    for i in range(1, 20, n+1):
        print(i)

def square():
    squares = []
    for value in range(1,11):
        squares.append(value**2)
    print(sum(squares))

def list_comprehension():
    squares= [value**2 for value in range(1,11)]
    print(squares)

def million():
    mill = []
    for value in range(1,1000001):
        mill.append(value)
    print(max(mill))

#players = ['charles', 'martina', 'michael', 'florence', 'eli']
#players.append('faggotr')
#print("\nHello: ")
#for player in players[-1:]:
#    print(f'This is the best player on my team: {player.title()}')
def fod():
    foods = ('pizza', 'izza', 'zza', 'za', 'a')
    print('\nold menu: ')
    for food in foods:
        print(food)

    foods = reversed(foods)

    print("\nNew menu: ")
    for food in foods:
        print(food)

def multiply(a, b):
    print(a * b)

# Nesting Dictionaries
#aliens = []
#for alien_number in range(30):
#    new_alien = {'color': 'green', 'points': 5, 'speed': 'slow'}
#    aliens.append(new_alien)
#
#for alien in aliens[0:3]:
#    if alien['color'] == 'green':
#        alien['color'] = 'yellow'
#        alien['points'] = 10
#        alien['speed'] = 'medium'
#    elif alien['color'] == 'yellow':
#        alien['color'] = 'red'
#        alien['speed'] = 'fast'
#
#        alien['points'] = 15
#for alien in aliens[:5]:
#    print(alien)

def pipza():
    pizza = {
        'crust': 'thick',
        'toppings': ['mushroom', 'extra cheese'],
    }
    print(f"You ordered a {pizza['crust']} crust-pizza"
          " with the following toppings: ")
    for topping in pizza['toppings']:
        print("\t" + topping)

def nested_dict():
    user = {
        'aeinstein': {
            'first': 'albert',
            'last': 'einstein',\
            'location': 'princeton',
        },
        'mcurie': {
            'first': 'marie',
            'last': 'curie',
            'location': 'paris',
        },
    }

    for username, user_info in user.items():
        print(f"\nUsername: {username}")
        full_name = f"{user_info['first']} {user_info['last']}"
        location = user_info['location']

        print(f"\tFull name: {full_name.title()}")
        print(f"\tLocation: {location.title()}")

def cities_dict():
    cities = {
        'santiago': {
            'country': 'bruh',
            'population': '18 miliion',
            'fact': 'smelly',
        },
        'new york': {
            'country': 'us',
            'population': '200m',
            'fact': 'big',
        },
        'sao paulo': {
            'country': 'brazil',
            'population': '100m',
            'fact': 'favela',
        },
    }
    for city_name, city_info in cities.items():
        print(f"\ncity: {city_name}")
        full_city = f"Country: {city_info['country']}, Population: {city_info['population']}, Fact: {city_info['fact']}"
        print(f"\t{full_city}")

def odd_even():
    number = int(input())
    if number % 2 == 0:
        print('even')
    else:
        print('odd')

def rest_table():
    ppl = int(input("number of people?: "))
    if ppl > 8:
        print('wait for another table')
    elif ppl <= 8:
        print('your table is ready!')

def cont():
    s = 'zephyr'
    i = 0
    while i < len(s):
        if not s[i] in 'aeiou':
            i = i + 1
            continue
        print(s[i], i)
        i = i + 1
cont()