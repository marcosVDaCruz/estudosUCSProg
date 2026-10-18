/* 19) Escreva uma função em C com o seguinte protótipo
int int2hex(int n, char str[])
que receba um número inteiro positivo e armazene o número convertido para hexadecimal em uma string recebida por parâmetro. */

#include <stdio.h>
#include <string.h>

#define N 9

int int2hex(int n, char str[N]){
    int i=0,resto=0,aux,j ;

    for(n=0;n>0;i++){
        resto = n % 16;
        if(resto<10){
            str[i] = resto + '0';
        }
        else {
            str[i] = resto - 10 + 'A';
        }
        n = n/16;
    }
    str[i] = '\0';
    
    for(i=0,j=strlen(str)-1;i<j;i++,j--){
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }
    return 1;
}

int main(){
    char str[N];
    int n;

    printf("Digite um valor em decimal: ");
    scanf("%d",&n);

    int2hex(n,str);
    printf("O valor em hexa: %s\n",str);
}