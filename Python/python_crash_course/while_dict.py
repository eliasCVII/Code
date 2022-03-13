unconfirmed_users = ['lol', 'lal', 'lel']
confirmed_users = []

while unconfirmed_users:
    current_user = unconfirmed_users.pop()
    print(f'veryfing: {current_user}')
    confirmed_users.append(current_user)
for confirmed_user in confirmed_users:
    print(f'\nverified: {confirmed_user}')
