binom = []
aux = []
aux.append(1)
binom.append(aux)
max = 10 ** 60
flag = False
print(1)

for i in range(1,210):
    aux = []
    aux.append(1)    

    for j in range(1,i):
        aux.append(binom[i - 1][j] + binom[i - 1][j - 1])

    aux.append(1)
        
    cont = 0
    for el in aux:
        if el >= max:
            flag = True
        if(cont == 0):
            print(el,end='')
        else:
            print('',el,end='')
        cont+=1

    binom.append(aux)
    print()
        
    if(flag):
        break
