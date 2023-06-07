N = int(input())
if N > 1:
    N_comma = 'far, ' * (N - 1) + 'far away...'
    print('A long time ago in a galaxy ' + N_comma )
elif N == 1:
    print('A long time ago in a galaxy far away...')
