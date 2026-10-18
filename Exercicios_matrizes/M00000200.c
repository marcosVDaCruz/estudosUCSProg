/* Faça um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos em toda a região acima da diagonal principal. */

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

int somaAcimaPrincipal(int mat[N][N]){
    int i,j;
    int soma=0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(j>i){
                soma+=mat[i][j];
            }
        }
    }
    return soma;
}

int main(){
    int mat[N][N];
    int soma;
    escreva(mat);
    ler(mat);
    printf("A soma acima da diagonal Principal é: %d\n",somaAcimaPrincipal(mat));
}