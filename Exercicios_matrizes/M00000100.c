/* Faça um programa leia uma matriz M[5][5] e calcule e escreva a soma dos elementos da diagonal principal: */

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

int somaPrincipal(int mat[N][N]){
    int i,j,soma=0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i == j){
                soma += mat[i][j];
            }
        }
    }
    return soma;
}

int main(){
    int soma;
    int mat[N][N];
    gerarMatriz(mat);
    escrever(mat);
    printf("A soma dos elementos na diagonal principal é: %d\n",somaPrincipal(mat));
}