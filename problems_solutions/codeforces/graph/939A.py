n = int(input())
cons = [int(x) for x in input().split()]

graph = {}

for i in range(len(cons)):
    graph[i+1] = cons[i]

triangle = False

for node in graph:
    a = graph[node]
    b = graph[a]

    if node == graph[b] and node != a:
        triangle = True; break

if triangle:
    print("YES")
else:
    print("NO")
