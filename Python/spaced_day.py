import json
import datetime

from datetime import timedelta

filename = 'tasks.json'

with open(filename) as f:
    activities_obj = json.load(f)

my_keys = ["tasks", "length"]
task_name = activities_obj["tasks"]
length_task = activities_obj["length"]

n_tasks = len(task_name)
default_hours = activities_obj["default_hours"]
daily_min = (default_hours * 60)
task_minutes = sum(length_task)
ratio_multiplier = float((daily_min/task_minutes))

def name_printer():
    for name in task_name:
        task_final_name = name
        print(task_final_name)

def actlen_calc():
    for v in length_task:
        ActLen = ratio_multiplier * v
        print(round(ActLen))


with open(filename, 'w') as f:
    task_name.append("WHAT")


# print(f"raw file: {activities_obj}")
print(f"all tasks length summed up: {task_minutes}")
print(f"working hours in minutes: {daily_min}")
print(f"value to * per tasks: {ratio_multiplier}")
print(f"there are {n_tasks} tasks: ")
name_printer()
print("ActLen: ")
actlen_calc()
# print(activities_obj.get("length"))
