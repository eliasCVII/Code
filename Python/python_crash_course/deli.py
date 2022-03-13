sandwich_orders = ['vegan', 'meatlord', 'pizza', 'everything', 'disgusting']
finished_sandwiches = []
while sandwich_orders:
    finished_sandwiches = sandwich_orders.pop()
    print(f'making your {finished_sandwiches} sandwich...')
    print(f'done making {finished_sandwiches} sandwich')