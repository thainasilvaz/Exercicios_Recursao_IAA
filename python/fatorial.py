
#fatorial: n! = n*(n-1)*(n-2)* ... *3*2*1 para n>0
#!0 = 1

'''
Sem utilizar recursão:

def fatorialr(n):
    resultado = 1
    for i in range(2, n+1): #i percorre os valores de 2 até n (incluso)
        resultado = resultado * i
    return resultado

print(fatorialr(0))
'''

def fatorialr(n):
    if n == 0:
        return 1
    else:
        return n*fatorialr(n-1)

print(fatorialr(5))



