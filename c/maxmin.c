/*
Escreva um método recursivo maxmin que calcule o valor de
um elemento máximo e o valor de um elemento mínimo de
um vetor v[0..n-1]. Quantas comparações envolvendo os
elementos do vetor a sua função faz?
*/

#include <stdio.h>

int max(int v[], int n){
    if (n==0){
        return v[n];
    }

    int m = max(v, n-1);

    if(v[n-1] > m){
        return v[n-1];
    } else {
        return m;
    }
}

int min(int v[], int n){
    if (n==0){
        return v[n];
    }

    int m = min(v, n-1);

    if(v[n-1] < m){
        return v[n-1];
    } else {
        return m;
    }
}

int main(){

    int v[] = {4, 8 , 32, 13, 11};
    int n = 5;

    printf("O menor valor é %d\n", min(v, n));
    printf("O maior valor é %d\n", max(v, n));

    return 0;
}