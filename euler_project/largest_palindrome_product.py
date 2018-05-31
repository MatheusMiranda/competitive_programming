maior = -1

for i in range(100,1000):
    for j in range(100,1000):
        a = i * j
        if str(a) == str(a)[::-1]:
            if a > maior:
                maior = a

print(maior)
