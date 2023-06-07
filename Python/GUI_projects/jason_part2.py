import json

test_json = {"task": ["stuff", "stuff2", "task3"], "length": [90, 30, 120]}

filename = 'tasks.json'
with open(filename, 'w') as f:
    json.dump(test_json, f)

task_length = test_json["length"]
total_length = sum(test_json["length"])
task_name = test_json["task"]

print(total_length)
print(task_length)
print(task_name)