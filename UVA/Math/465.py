from sys import stdin

for line in stdin:
    
    n1,op,n2 = (line.strip().split(' '))
    
    max = 2147483647
    mc = 10
    p = True
    s = True
    r = True
    
    if int(n1) > max:
        p = False
    if int(n2) > max:
        s = False
            
    if op == "+":
        if (int(n1) + int(n2)) > max:
            r = False
    
    if op == "*":
        if (int(n1) * int(n2)) > max:
            r = False;
    
    print(n1,op,n2)
    if not p:
        print("first number too big")
    if not s:
        print("second number too big")
    if not r:
        print("result too big")
    
