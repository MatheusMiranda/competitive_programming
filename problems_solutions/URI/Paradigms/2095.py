n = int(input)
n += 1
q = [0 * n]
n = [0 * n]

qs = [int(x) for x in input().split()]
ns = [int(x) for x in input().split()]

for el in qs:
    qs[el]++
