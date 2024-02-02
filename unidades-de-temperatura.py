n1 = float(input ('Digite um valor em \033[32mºC\033[m: '))
a = n1
b = 32 + 9 / 5 * a
c = 273.15 + a
d = a * 0.8
e = c / 1000000000000000000000000000000000000 * 7058
f = 491.7 + a * 1.8
g = a * 0.33
h = 7.5 + a * 0.525
i = 150 - a * 1.5 
print ('{}ºC {}ºF {}K {}ºRe {}Θ'.format(a, b, c, d, e))
print ('{}ºR {}ºN {}Rø {}ºD'.format(f, g, h, i))
print ('\033[36mA CATEC agradece a sua consulta!\033[m')