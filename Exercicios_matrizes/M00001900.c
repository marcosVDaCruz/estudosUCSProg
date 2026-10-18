/* Faça um programa que leia uma matriz M[5][5], possivelmente com elementos repetidos. Leia, a seguir, 5 valores e, para cada um, verifique se o valor ocorre ou não na matriz, escrevendo a posição (linha e coluna) em que foi encontrada a primeira ocorrência do mesmo e, caso ele não exista na matriz, a mensagem "Não tem". */

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

void procurarMat(int mat[N][N], int Nums[5]){
    int i,j,k;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            for(k=0;k<5;k++){
                if(mat[i][j] == Nums[k]){
                    printf("Encontrado Nums[%d] em mat[%d][%d].\n",Nums[k],i,j);
                }
            }
        }
    }
}

int main(){
    int mat[N][N];
    int Nums[5];
    int i;
    escreva(mat);
    ler(mat);
    for(i=0;i<5;i++){
        printf("Digite um valor: \n");
        scanf("%d",&Nums[i]);
    }
    procurarMat(mat,Nums);
}