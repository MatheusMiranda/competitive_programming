d = {'W': 64, 'H': 32, 'Q': 16, 'E': 8, 'S': 4, 'T': 2, 'X': 1}

while(True):
    compass = input()
    if compass == "*":
        break

    total_ms = 0

    ms = compass.split('/')

    for m in ms:
        total = 0
        for L in m:
            total += d[L]

        if total // 64 == 1 and total % 64 == 0:
            total_ms += 1

    print(total_ms)
