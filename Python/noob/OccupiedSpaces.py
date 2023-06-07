# Occupied Spaces
# DMOJ: ccc18j2
n = int(input())
yesterday = input()
today = input()
occupied = 0
for i in range(len(yesterday)): # searches for indexed C within the input
    if yesterday[i] == 'C' and today[i] == 'C': # If both days are occupied, then occupied variable is 1
        occupied += 1 

print(occupied)
