a = input()
b = input()

if not b.count('0'):
    print(-1)
elif b.count('5') >= 9:
    cont = b.count('5')
    print(((cont // 9) * 9 * "5") + (b.count('0') * "0"))
else:
    print("0")
