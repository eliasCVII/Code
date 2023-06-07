from operator import itemgetter

# for k in dict.items():
    # print(k)

# my_keys = ["k1", "k2"]
# for key in my_keys:
#     print(dict.get(key))

# for key, value in dict.items():
#     print(key, ":", value)

# workpls = itemgetter("k1", "k2")(dict)
# print(workpls)

# print("".format("tasks", "length"))
# for k, v in dict.items():
#     tasks, length = v
#     print("".format(k, tasks, length))

dict = {"tasks": ["preu", "rest"], "length": [90, 25]}

ratio_multiplier = 3
length = [90, 20, 30, 75]

for v in length:
    new_num = ratio_multiplier * v
    print(new_num)
    print("\n")

user_input = str(input("what task do u want to add: "))

print(user_input)
dict["tasks"].append(user_input)

print(dict)
