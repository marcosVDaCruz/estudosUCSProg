/* Faça um programa que leia uma matriz M[5][5], onde cada posição contem um número entre 0 e 9 e cada linha da matriz representa um número de 5 dígitos. O algoritmo deve calcular a soma dos 5 números contidos na matriz colocando o resultado em um vetor Soma[6]. Escreva ao final o vetor Soma. */

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

int somaMat(int mat[N][N], int Soma[6]){
    int i,j;
    int soma = 0,somaTotal = 0;
    for(i=0;i<N;i++){
        soma = 0;
        for(j=0;j<N;j++){
            soma = soma*10 + mat[i][j];
        }
        Soma[i] = soma;
        printf("%d ",Soma[i]);
        somaTotal += soma;
    }
    Soma[5] = somaTotal;
    return somaTotal;
}

int main(){
    int mat[N][N];
    int Soma[6];
    escreva(mat);
    ler(mat);
    printf("\nSoma total = %d\n",somaMat(mat,Soma));
}