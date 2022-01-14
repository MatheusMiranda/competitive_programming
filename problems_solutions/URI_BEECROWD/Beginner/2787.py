i = int(input())
j = int(input())

if i == j or (i % 2 == 0 and j % 2 == 0) or (i % 2 == 1 and j % 2 == 1):
    print(1)
else:
    print(0)
