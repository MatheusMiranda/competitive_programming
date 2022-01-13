import fileinput
import math

for line in fileinput.input():
    n = line.strip()
    a = math.factorial(int(n))
    st = str(a)
    l = len(st) - 1
    resp = ''

    while(l >= 0):
        if(st[l] != '0'):
            resp = st[l]
            break
        l-=1

    
    spaces = 5 - len(n) - 1
    
    print(spaces*' ',n,'->',resp)
