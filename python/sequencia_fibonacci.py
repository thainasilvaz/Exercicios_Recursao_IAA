#sequência de fibonnaci: 0 1 1 2 3 5 8 13 21 ... 

'''
calcular o valor do elemento n na posição f

f1 = 0
f2 = 1
fn = fn-1 + fn-2 para n>= 2

(no código estou chamando f de índice)

'''

def fibonaccir(indice):
    
    if indice == 1:
        return 0
    elif indice == 2:
        return 1
    else:
        return fibonaccir(indice-1) + fibonaccir(indice-2)


print(fibonaccir(7))
