/* 1) Fazer uma função que troque o valor de duas variáveis inteiras informadas como parâmetro. */

#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a = 3, b = 8;
    troca(&a,&b);
    printf("Main: A = %d B = %d\n",a,b);
}