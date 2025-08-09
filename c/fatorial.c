//f6 no vs code para rodar

#include <stdio.h>

// Função recursiva para calcular fatorial
int fatorialr(int n) {
    if (n == 0) {
        return 1;  // Caso base
    } else {
        return n * fatorialr(n - 1);  // Chamada recursiva
    }
}

int main() {
    int resultado = fatorialr(5);
    printf("%d\n", resultado);  // Saída: 120
    return 0;
}