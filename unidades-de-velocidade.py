n1 = float(input ('Digite um valor em \033[32mkm/h\033[m: '))
a = n1 / 10000000 * 2778
b = n1 / 10000 * 2778
c = n1 / 100000 * 1667
d = n1 / 100 * 1667
e = n1
f = n1 * 1000
g = n1 * 8766
h = n1 * 8765813
i = n1 / 10000000 * 1726
j = n1 / 10000 * 9113
k = n1 / 100 * 1094
l = n1 / 100000 * 1036
m = n1 / 100 * 5468
n = n1 / 10 * 6562
o = n1 / 10000 * 6214
p = n1 * 3281
q = n1 * 39370
r = n1 * 5447
s = n1 * 28759228
t = n1 * 345110740
u = n1 * 60 / e / e
v = n1 * 3600 / e / e
w = n1 * 360 / e / e
x = n1 / 100 * 9656 / e / e
y = n1 * 5794 / e / e
z = n1 / 10 * 3292 / e / e
aa = n1 * 1800 / e / e
ab = n1 / 100 * 54
ac = n1 / 100 * 54
ad = n1 / 1000000 * 817
ae = n1 / 1000000000000 * 926
print ('-' * 30)
print ('\033[0;30;43m-------MEDIDAS MÉTRICAS-------\033[m')
print ('-' * 30)
print ('\033[34m{} km/s |{} m/s |{} quilômetro por minuto |{} metro por minuto |{} km/h |{} m/h |{} quilômetro por ano |{} metro por ano |\033[m'.format(a, b, c, d, e, f, g, h))
print ('-' * 30)
print ('\033[0;30;43m-------EUA E INGLATERRA-------\033[m')
print ('-' * 30)
print ('\033[34m{} milha por segundo |{} pé por segundo |{} polegada por segundo |{} milha por minuto |{} pé por minuto |{} polegada por minuto |{} mph |{} pé por hora |{} polegada por hora |{} milha por ano |{} pé por ano |{} polegada por ano |\033[m'.format(i, j, k, l, m, n, o, p, q, r, s, t))
print ('-' * 29)
print ('\033[0;30;43m------------RITMO------------\033[m')
print ('-' * 29)
print ('\033[34m{} minutos por quilômetro |{} segundos por quilômetro |{} segundos por 100 metros |{} minutos por milha |{} segundos por milha |{} segundos por 100 jardas |{} segundos por 500 metros |\033[m'.format(u, v, w, x, y, z, aa))
print ('-' * 29)
print ('\033[0;30;43m------UNIDADES NÁUTICAS------\033[m')
print ('-' * 29)
print ('\033[34m{} nó |{} milha marítima por hora |\033[m'.format(ab, ac))
print ('-' * 30)
print ('\033[4;30;42m------------FÍSICA------------\033[m')
print ('-' * 30)
print ('\033[35m{} velocidade do som no ar |{} velocidade da luz no vácuo |\033[m'.format(ad, ae))
print ('\033[36mA CATEC agradece a sua consulta!\033[m')