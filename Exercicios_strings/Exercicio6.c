/* 6) Escreva uma função em C que receba uma string com um número válido, após converta o número lido para decimal, armazenando-o em uma variável inteira e a retorne. */

#include <stdio.h>

int str2int(const char str[]){
    int i,numero=0;

    for(i=0;str[i] != '\0';i++){
        numero = numero * 10 + (str[i] - '0');
    }
    return numero;
}

int main(){
    char str[20];

    printf("Digite um numero: ");
    scanf(" %19s", str);

    printf("Retorno: %d\n", str2int(str));
}