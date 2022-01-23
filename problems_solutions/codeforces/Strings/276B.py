s = input()
t = sum(s.count(c) % 2 for c in s)
print('First' if t % 2 or t == 0 else 'Second')
