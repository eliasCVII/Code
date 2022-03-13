#!/usr/bin/env python3
user_0 = {
    'username': 'yoman',
    'first': 'enrice',
    'last': 'fermi',
}
langs = {'jen': 'py',
         'jon': 'py',
         'jin': 'c',
         'jan': 'Rust'}
# .items() to see all the elements inside a dictionary,
# .keys() to see all the keys.
# .values() to access only the values
for k in sorted(set(langs.values())): # sorts alphabetically; set() is a
    # collection where an item is unique.
    print(f"\nvoted: {k.title()}")
print(langs.values())
