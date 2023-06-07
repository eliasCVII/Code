import json

#json.dump() takes 2 variables, first one takes a string and stores it in the second one
#filename='niggers.json'
#nigga = [1,2,3]
#with open(filename, 'w') as f:
#   json.dump(nigga, f)

#json.load() loads back file into memory
#filename='niggers2.json'
#with open(filename) as f:
#   json.load(f)

filename = 'tasks.json'
tasks = {"task": ["study", "rest"], "length": [90, 20], "ActLen": ["-", "-"]}
task_json = json.dumps(tasks, indent=2)
total_minutes = sum(tasks["length"])

with open(filename) as f:
    new_obj = json.load(f)

print(total_minutes)
print(new_obj)
