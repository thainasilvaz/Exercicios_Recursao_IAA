//f6 no vs code para rodar

#include <stdio.h> 

int buscaBinaria(int vetor[], int inicio, int fim, int alvo) {
    if (inicio > fim) {
        return -1; // Não encontrado
    }

    int meio = (inicio + fim) / 2;

    if (vetor[meio] == alvo) {
        return meio;
    } else if (alvo < vetor[meio]) {
        return buscaBinaria(vetor, inicio, meio - 1, alvo);
    } else {
        return buscaBinaria(vetor, meio + 1, fim, alvo);
    }
}

int main() {
    int dados[] = {1, 3, 5, 7, 9, 11, 13};
    int tamanho = sizeof(dados) / sizeof(dados[0]);
    int alvo = 7;

    int indice = buscaBinaria(dados, 0, tamanho - 1, alvo);

    if (indice != -1) {
        printf("Elemento encontrado no índice %d\n", indice);
    } else {
        printf("Elemento não encontrado\n");
    }

    return 0;
}