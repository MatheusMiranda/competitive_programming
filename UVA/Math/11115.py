while(1):
    line = input()
    a,b = line.split()
    a = int(a)
    b = int(b)
    if(a == 0 and b == 0):
        break

    print(a ** b)
