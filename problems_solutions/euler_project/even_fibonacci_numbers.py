sum = 2
prev1 = 1
prev2 = 2

while(1):
    act = prev1 + prev2
    if act > 4000000:
        break

    if act% 2 == 0:
        sum += act

    prev1 = prev2
    prev2 = act


print(sum)
    
