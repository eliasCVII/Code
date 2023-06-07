unc_users = ['alice', 'brian', 'candance']
confirmed = []
while unc_users:
    current_user = unc_users.pop()
    print(f'verifying stuff {current_user.title()}')
    confirmed.append(current_user)
print('\nconfirmed:')
for confirmeduser in confirmed:
    print(confirmeduser.title())