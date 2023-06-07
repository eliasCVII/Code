import json
#numbers = [2, 3 ,5, 7, 11, 13]

#filename = 'numbers.json'
#with open(filename, 'w') as f:
#    json.dump(numbers, f)

#filename = 'numbers.json'
#with open(filename) as f:
#    numbers = json.load(f)
#print(numbers)

#username = input("What is your name?: ")
#
#filename = 'username.json'
#with open(filename, 'w') as f:
#    json.dump(username, f)
#    print(f"We'll remember you, {username}")

#filename = 'username.json'
#with open(filename) as f:
#    username = json.load(f)
#    print(f"Welcome back {username}")

def get_stored_name():
    filename = 'username.json'
    try:
        with open(filename) as f:
            username = json.load(f)
    except FileNotFoundError:
        return None
    else:
        return username

def get_username():
    username = input("Whats yo name? ")
    filename = 'username.json'
    with open(filename, 'w') as f:
        json.dump(username, f)
    return username

def greet_user():
    username = get_stored_name()
    if username:
      print(f"Welcome back {username}")
    else:
        username = get_username()
        print(f"well see ya soon {username}")

def stored_fav_num():
    filename = 'fav_num.json'
    try:
        with open(filename) as f:
          fav_num = json.load(f)

    except FileNotFoundError:
        return None
    else:
        return fav_num

def ask_fav_numba():
    filename = 'fav_num.json'
    fav_num = int(input("What is your fav number?: "))
    with open(filename, 'w') as f:
            json.dump(fav_num, f)
    return fav_num

def guess_fav_num():
    fav_num = stored_fav_num()
    if fav_num:
        print(f"your fav number is {fav_num}")
    else:
        fav_num = ask_fav_numba()

def iterate_json():
    json_string ='{"Task": "PREU", "Task2": "Py"}'
    filename = 'data.json'
    json_dictionary = json.loads(json_string)

    for key in json_dictionary:
        print(key, ":", json_dictionary[key])

def jason_bruh():
#    tasks = '{"name": ["PREU","study","rest"], "length": [90, 120, 30]}'
    tasks = '{"name": "PREU", "length": 90}'
    task_json = json.dumps(tasks, indent=2, sort_keys=True)

    with open('person.json', 'w') as f:
        json.dump(tasks, f)

def count_jason(): # count n of tasks inside json file
    json_obj = {"tasks": ["preu", "study", "rest"], "length": [90, 60, 30]}
    n_tasks = len(json_obj["tasks"])
    time_length = json_obj["length"]
    print(n_tasks)
    print(time_length)
