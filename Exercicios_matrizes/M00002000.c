/* Uma matriz é dita triangular superior se todos os elementos abaixo da diagonal principal são iguais a zero, e há pelo menos um elemento não nulo acima da diagonal principal. Da mesma forma, uma matriz é dita triangular inferior se todos os elementos acima da diagonal principal são iguais a zero, e há pelo menos um elemento não nulo abaixo da diagonal principal. E uma matriz é dita diagonal se os elementos não nulos ocorrem somente na diagonal principal. Faça um programa que leia uma matriz M[5][5] e escreva: 0 - Se a matriz é uma matriz diagonal; 1 - Se é triangular superior; 2- Se é triangular inferior; 3 - Se não é nenhuma das anteriores. */

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

int tipoMatriz(int mat[N][N]){
    int i,j;
    int tipo;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i>j){
                if(i<j && j != 0){
                    tipo = 1;
                }
            }
            else {
                tipo = 3;
            }
            if(i<j){
                if(i>j && j != 0){
                    tipo = 2;
                }
            }
            else {
                tipo = 3;
            }
        }
    }
}

int main(){
    int mat[N][N];
    escreva(mat);
    ler(mat);
    tipoMatriz(mat);
}