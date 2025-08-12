'''
Escreva um método recursivo que calcule a soma dos
elementos positivos do vetor de inteiros v[0..n-1]. O problema
faz sentido quando n é igual a 0? Quanto deve valer a soma
nesse caso?

R: Se n for igual a zero o vetor está vazio, portanto, a soma deve ser igual a zero.
'''

vetor_inteiros = [-2, -10, 0, 5, 7, 8, 4, 2, 24, 32]

def somaR(vetor, tamanho_vetor):

    if tamanho_vetor == 0: #caso base
        return 0 #vetor vazio -> soma = 0
    else:
        ultimo_numero = vetor_inteiros[tamanho_vetor - 1]
        if ultimo_numero > 0:
            return somaR(vetor, tamanho_vetor - 1) + ultimo_numero
        else:
            return somaR(vetor, tamanho_vetor - 1)


print(somaR(vetor_inteiros, len(vetor_inteiros)))