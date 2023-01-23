n = int(input())

sq = n ** 2
summation = (sq * (sq + 1))//2
goal = summation / n
candidates = [i for i in range(1, sq + 1)]

pairs = []

for i in range(sq//2):
    pairs.append((candidates[i], candidates[sq - i - 1]))

counter = 0
maximum = n/2

for el in pairs:
    if counter:
        print(' ', end='')
    print(el[0], el[1], end='')
    counter += 1

    if(counter == maximum):
        counter = 0
        print('')
