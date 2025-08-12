//f6 no vs code para rodar

/*
Escreva um método recursivo que calcule a soma dos
elementos positivos do vetor de inteiros v[0..n-1]. O problema
faz sentido quando n é igual a 0? Quanto deve valer a soma
nesse caso? 
*/ 

#include <stdio.h>

int soma (int v[], int n){
    if (n == 0) //caso base
        return 0;
    else
        return (v[n-1] + soma (v, n-1));
}


int main(){

    int v[] = {4, 8 ,32, 13, 11};
    printf("A soma de um vetor de tamanho %d = %d\n", 5, soma(v,5));

    return 0;
}