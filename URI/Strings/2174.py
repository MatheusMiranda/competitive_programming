n = int(input())
pks = set()

for i in range(n):
    p = input()
    pks.add(p)

val = 151 - len(pks)

print(f'Falta(m) {val} pomekon(s).')
