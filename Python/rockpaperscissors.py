print("""
...rock...
...paper...
...scissors...
""")
plays = int(input())
player1 = input("\nWhat's your move, player1?: ")
player2= input("What's your move, player2?: ")
player1_score = 0
player2_score = 0

for i in range(plays):
    if player1 == 'rock' and player2 == 'paper':
        player2_score = (player2_score + 1)
    if player1_score > player2_score:
        winner = 'player one'
    else: 
        winner = 'player two'
    if player2_score > player1_score:
        print(f"1 point for {winner}")
    if player2_score == player1_score:
        print("no points")