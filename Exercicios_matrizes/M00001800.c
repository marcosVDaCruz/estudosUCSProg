/* Faça um programa que leia uma matriz M[5][6] e divide todos os 6 elementos de cada linha pelo valor do menor elemento EM MÓDULO da linha. Escrever a matriz modificada. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 6

void escreva(float mat[N][M]){
    int i,j;
    srand(time(NULL));
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            mat[i][j] = rand() % 10;
        }
    }
}

void ler(float mat[N][M]){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%.2f ",mat[i][j]);
        }
        printf("\n");
    }
}

void moduloMat(float mat[N][M]){
    int i,j;
    float menor;;
    for(i=0;i<N;i++){
        menor = mat[0][j];
        if(menor < 0){
            menor = -menor;
        }
        for(j=1;j<M;j++){
            float modulo = mat[i][j];

            if(modulo < 0){
                modulo = -modulo;
            }

            if(modulo < menor){
                menor = modulo;
            }
        }
        for(j=0;j<M;j++){
            mat[i][j] = mat[i][j] / menor;
        }
    }
}

int main(){
    float mat[N][M];
    escreva(mat);
    ler(mat);
    printf("\n");
    moduloMat(mat);
    ler(mat);
}