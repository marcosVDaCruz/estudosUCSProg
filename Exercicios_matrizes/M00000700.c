/* Uma matriz identidade é uma matriz que possui 1 em todos os elementos da diagonal principal, e 0 em todas as outras posições. Faça um programa que leia uma matriz M[5][5] e verifique se é uma matriz identidade escrevendo: 1 - Se é uma matriz identidade; 0 - Se não é uma matriz identidade. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void escreva(int mat[N][N]){
    int i,j;
    srand(time(NULL));
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            mat[i][j] = rand() % 2;
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
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(j == i){
                if(mat[i][j] != 1){
                    return 0;
                }
            }
            else {
                if(mat[i][j] != 0){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main(){
    int mat[N][N];
    escreva(mat);
    ler(mat);
    printf("Retorno: %d\n",tipoMatriz(mat));
}