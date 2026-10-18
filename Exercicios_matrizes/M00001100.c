/* Uma matriz é dita Diagonalmente Dominante se em todas as linhas o elemento da diagonal principal é maior ou igual à soma dos outros elementos da linha, e há pelo menos uma linha em que o elemento da diagonal principal é MAIOR que a soma dos outros elementos da linha (não basta que seja igual). Faça um programa que leia uma matriz M[4][4] e verifique se é diagonalmente dominante escrevendo: 1 - Se é diagonalmente dominante; 0 - Se não é diagonalmente dominante */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

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

int diagonalDominante(int mat[N][N]){
    int i,j;
    int soma=0,principal=0,maior=0;
    for(i=0;i<N;i++){
        soma = 0;
        principal = 0;
        for(j=0;j<N;j++){
            if(i != j){
                soma += mat[i][j];
            }
            else{
                principal = mat[i][j];
            }
        }
        if(principal < soma){
            return 0;
        }
        if(principal > soma){
            maior = 1;
        }
    }
    if(maior == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int mat[N][N];
    escreva(mat);
    ler(mat);
    printf("%d\n",diagonalDominante(mat));
}