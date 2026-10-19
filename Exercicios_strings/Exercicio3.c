/* 3) Fazer um programa que leia uma string e a partir desta gere uma nova contendo um espaço em branco entre cada caracter da string original. Escreva a nova string. */

#include <stdio.h>
#include <string.h>

#define N 50

int main(){
    char v[N];
    char v2[N*2];
    int i,j;

    printf("Digite uma frase: ");
    fgets(v,N,stdin);
    v[strcspn(v, "\n")] = '\0';
    for(i=0,j=0;v[i]!='\0';i++){
        v2[j] = v[i];
        j++;
        if(v[i+1] != '\0'){
            v2[j] = ' ';
            j++;
        }
    }
    v2[j] = '\0';
    printf("Nova string: %s\n",v2);
}