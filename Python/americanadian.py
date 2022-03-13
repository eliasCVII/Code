def words():
    while True:
        w = " "
        w = input()
        if w == 'quit!':
            break
        if w[-2:] == 'or' and len(w) > 3:
            w = w[:-2] + 'our'

