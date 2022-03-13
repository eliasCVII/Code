# first input the width of the fucking pizza W
# then the percentage of cheese
# output M
W = int(input())
C = int(input())
#grading
if W == 3 and C >= 95:
  M = 'absolutely'
elif W == 1 and C <= 50:
  M = 'fairly'
else:
  M = 'very'
print(f"C.C. is {M} satisfied with her pizza.")