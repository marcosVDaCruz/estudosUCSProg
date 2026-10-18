/* Faça um programa que leia uma matriz M[5][5] e troque cada elemento da linha 3 com elemento correspondente da linha 1. Escreva a matriz resultante. */

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

int trocarElementos(int mat[N][N]){
    int i,j,aux;
    for(j=0;j<N;j++){
        aux = mat[0][j];
        mat[0][j] = mat[2][j];
        mat[2][j] = aux;
    }
}

int main(){
    int mat[N][N];
    escreva(mat);
    ler(mat);
    trocarElementos(mat);
    printf("\n");
    ler(mat);
}