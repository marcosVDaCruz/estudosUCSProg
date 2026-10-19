/* 1)  Fazer um programa que leia uma letra (L) e um número (N), a seguir gere uma string contendo N letras L. */

#include <stdio.h>

int main(){
    char v[50];
    int i,n;

    printf("Digite uma letra: ");
    scanf(" %c",&v[0]);

    printf("Digite um numero: ");
    scanf("%d",&n);

    if(n<0 || n>49){    //Caso o n seja maior/menor que o vetor;
        printf("Digite um numero de 0 até 49.\n");
        return 0;
    }

    for(i=1;i<n;i++){
        v[i] = v[0];
    }

    printf("%s\n",v);
}