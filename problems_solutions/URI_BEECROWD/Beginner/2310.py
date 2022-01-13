n = int(input())

serv = 0
block = 0
att = 0

r_serv = 0
r_block = 0
r_att = 0

for i in range(n):
    name = input()
    s, b, a = [int(x) for x in input().split()]
    r_s, r_b, r_a = [int(x) for x in input().split()]

    serv += s; r_serv += r_s
    block += b; r_block += r_b
    att += a; r_att += r_a

print('Pontos de Saque: {:.2f} %.'.format(100 * r_serv/serv))
print('Pontos de Bloqueio: {:.2f} %.'.format(100 * r_block/block))
print('Pontos de Ataque: {:.2f} %.'.format(100 * r_att/att))
