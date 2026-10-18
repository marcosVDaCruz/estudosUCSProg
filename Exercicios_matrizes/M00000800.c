/* Faça um programa que leia uma matriz M[5][5] e escreva o número da linha que contenha a maior soma de seus elementos. Considere que a matriz só contem valores positivos. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void gerarMatriz(int mat[N][N]){
    int i,j;
    srand(time(NULL));
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            mat[i][j] = rand()%10;
        }
    }
}

void escrever(int mat[N][N]){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int maiorLinha(int mat[N][N]){
    int i,j;
    int maior=0,linha=0,soma=0;
    for(i=0;i<N;i++){
        soma = 0;
        for(j=0;j<N;j++){
            soma += mat[i][j];
        }
        if(soma > maior){
            linha = i;
            maior = soma;
        }
    }
    return linha+1;
}

int main(){
    int mat[N][N];
    gerarMatriz(mat);
    escrever(mat);
    printf("A maior linha é: %d\n",maiorLinha(mat));
}