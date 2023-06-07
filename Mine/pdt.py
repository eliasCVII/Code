import random
# activities randomizer
energy = int(input("energy? 1-2:  "))
todos = ('Fisica', 'Mates', 'Lenguaje', 'Quimica', 'Biologia Comun', 'Biologia Mencion')
length = [5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60]

if energy == 1:
    do_now = random.choice(todos)
    length_now = random.choice(length)
    print(f"{do_now} for {length_now} minutes")
    too_much = input("too much? <y or n> ")
    if too_much == 'y':
        length_now = length_now/1.5
        print(f"{do_now}, for {length_now} minutes")
elif energy == 2:
    do_now = random.choice(todos)
    length_now = random.choice(length)
    print(f"{do_now} for {length_now * 2} minutes")
    too_much = input("too much? y or n ")
    if too_much == 'y':
        length_now = length_now/2
        print(f"{do_now}, for {length_now} minutes")
