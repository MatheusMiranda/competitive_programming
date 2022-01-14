n = int(input())
ps = [int(x) for x in input().split()]
res = []

for i in range(n):
    p = i
    v = [1] * n
    while(v[p]):
        v[p] = 0
        p = ps[p] - 1
    res.append(p+1)

print(*res)

