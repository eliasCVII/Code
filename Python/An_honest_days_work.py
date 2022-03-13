# P the ammount of paint litres 
# B how much is needed to make a badge
# D how much a badge is sold for
# the money would be P/B = badges, badges * D, money made + the modulo from P/B
P = int(input())
B = int(input())
D = int(input()) 
badges_full = P//B 
badges_leftover = P%B
money_made = (badges_full * D) + badges_leftover
print(money_made)
#print(badges)