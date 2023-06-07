# Apple's Score
threepa = int(input()) * 3
twopa = int(input()) * 2
onefa = int(input()) * 1
apple_score = (threepa + twopa + onefa)
# Banana's score
threepb = int(input()) * 3
twopb = int(input()) * 2
onefb = int(input()) * 1
banana_score = (threepb + twopb + onefb)
# Winner
if apple_score > banana_score:
    print('A')
elif banana_score > apple_score:
    print('B')
else: print('T')

# if banana_score == apple_score: 
#    print('T')
#    print("It's a fucking tie!")
