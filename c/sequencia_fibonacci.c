//f6 no vs code para rodar

#include <stdio.h>

// Função recursiva para calcular o n-ésimo número da sequência Fibonacci
int fibonaccir(int indice) {
    if (indice == 1) {
        return 0;
    } else if (indice == 2) {
        return 1;
    } else {
        return fibonaccir(indice - 1) + fibonaccir(indice - 2);
    }
}

int main() {
    int resultado = fibonaccir(7);
    printf("%d\n", resultado);  // Saída: 8
    return 0;
}