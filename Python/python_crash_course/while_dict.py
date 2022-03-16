unconfirmed_users = ['lol', 'lal', 'lel']
confirmed_users = []

while unconfirmed_users:
    current_user = unconfirmed_users.pop()
    print(f'veryfing: {current_user}')
    confirmed_users.append(current_user)
print("")
for confirmed_user in confirmed_users:
    print(f'verified: {confirmed_user}')
