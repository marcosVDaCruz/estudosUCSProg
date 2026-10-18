#include <stdio.h>
/*--------------------------------------------------------------*/
#define N 3
#define M 4
/*--------------------------------------------------------------*/
void ler(int mat[N][M]) {
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}
/*--------------------------------------------------------------*/
void escreva(int mat[N][M]){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("% 4d",mat[i][j]);
        }
        printf("\n");
    }
}
/*--------------------------------------------------------------*/
void inverter_colunas(int mat[N][M]){
    int i,ji,jf,aux;
    for(ji=0,jf=M-1;ji<jf;ji++,jf--){
        for(i=0;i<N;i++){
            aux = mat[i][ji];
            mat[i][ji] = mat[i][jf];
            mat[i][jf] = aux;
        }
    }
}
/*--------------------------------------------------------------*/
void  ordenar_matriz (int mat[N][M]){
    int i,j,soma,maior,col,aux;
    maior=0;
    col=0;
    for(j=0;j<M;j++){
        soma=0;
        for(i=0;i<N;i++){
            soma += mat[i][j];
            if(soma > maior){
                maior = soma;
                col = j;
            }
        }
    }
    for(i=0;i<N;i++){
        aux=mat[i][0];
        mat[i][0] = mat[i][col];
        mat[i][col] = aux;
    }
}
/*--------------------------------------------------------------*/
int main() {
    int mat[N][M];
    ler(mat);
    escreva(mat);
    printf("\n");
    inverter_colunas(mat);
    escreva(mat);
    printf("\n");
    ordenar_matriz(mat);
    escreva(mat);
}