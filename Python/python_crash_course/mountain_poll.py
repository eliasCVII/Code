responses = {}
# set flag
polling_active = True

while polling_active:
    name = input('whats your name: ')
    response = input('what mountain would you like to visit?: ')

    #Store responses inside the dictionary
    responses[name] = response
    # First it's setting the key (name) and its corresponding value (response)
    #Take poll again
    repeat = input('respond again?: (y/n)')
    if repeat == 'n':
        polling_active = False
# Show Results
print(responses)
print('\nResults: ')
for name, response in responses.items():
    print(f'{name} would go to {response}')


