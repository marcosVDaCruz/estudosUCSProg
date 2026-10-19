/* 2) Fazer um programa que leia uma string e a partir desta gere uma nova duplicando cada caracter da string original. Escreva a nova string. */

#include <stdio.h>
#include <string.h>

#define N 10

int main(){
    char v[N];
    char v2[N*2];
    int i;

    printf("Digite uma string: ");
    scanf(" %s", &v);

    for(i=0;i<N;i++){
        v2[2 * i] = v[i];
        v2[2 * i + 1] = v[i];
    }

    printf("%s\n", v2);
}