lista_ordenada = [0,1,2,3,4,5,6,7,8,9,10]


def busca_binariar(lista_ordenada, alvo, inicio=0, fim=None): #inicio = 0 -> começa sempre no primeiro índice da lista; fim=None -> na primeira chamada não há um índice final

    if fim is None:
        fim = len(lista_ordenada) - 1 #definindo fim como o ultimo indice da lista

    if inicio > fim:
        return - 1 #se o início pasar do fim não há mais elementos para buscar (não existe na lista)
    
    meio_lista = (inicio + fim)//2  #divisão inteira -> trabalhando com índices

    if alvo == lista_ordenada[meio_lista]:
        return meio_lista
    elif alvo < lista_ordenada[meio_lista]:
        return busca_binariar(lista_ordenada, alvo, inicio, meio_lista - 1)
    else:
        return busca_binariar(lista_ordenada, alvo, meio_lista + 1, fim)


print(busca_binariar(lista_ordenada, 3))