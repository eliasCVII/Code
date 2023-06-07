available_toppings = ['mushrom', 'garlic', 'lechuga']
requested_toppings = ['mushrom', 'fries', 'garlic']

for requested_topping in requested_toppings:
    if requested_topping in available_toppings:
        print(f"adding {requested_topping}")
    else:
        print(f'there is no {requested_topping} nigga.')
print('finished')