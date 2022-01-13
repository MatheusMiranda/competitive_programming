import fileinput

for line in fileinput.input():
    n = line.strip()
    n = int(n)

    resp = 1
    resposta = 0
    fator = 10
    while(1):
        if(resp % n == 0):
            resposta = len(str(resp))
            break
        else:
            resp += fator
            fator *= 10
    
        
    print(resposta) 
