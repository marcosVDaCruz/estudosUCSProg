/* Faça um programa que leia uma matriz M[5][5] e gere dois vetores SomaLin[5] e SomaCol[5], com a soma dos elementos de cada linha e a soma dos elementos de cada coluna da matriz M. Escreva ao final os vetores Somalin e Somacol. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void escreva(int mat[N][N]){
    int i,j;
    srand(time(NULL));
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            mat[i][j] = rand() % 10;
        }
    }
}

void ler(int mat[N][N]){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

void somaLinhaColuna(int mat[N][N],int SomaLin[N],int SomaCol[N]){
    int i,j;
    int soma;
    for(i=0;i<N;i++){
        soma = 0;
        for(j=0;j<N;j++){
            soma += mat[i][j];
        }
        SomaLin[i] = soma;
        printf("%d ",SomaLin[i]);
    }
    printf("\n");
    for(j=0;j<N;j++){
        soma = 0;
        for(i=0;i<N;i++){
            soma += mat[i][j];
        }
        SomaCol[j] = soma;
        printf("%d ",SomaCol[j]);
    }
}

int main(){
    int mat[N][N];
    int SomaLin[N];
    int SomaCol[N];
    escreva(mat);
    ler(mat);
    printf("\n");
    somaLinhaColuna(mat,SomaLin,SomaCol);
    printf("\n");
}
