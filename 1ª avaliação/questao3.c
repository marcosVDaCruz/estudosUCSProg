#include <stdio.h>
/*--------------------------------------------------------------*/
#define N 4
#define M 4
/*--------------------------------------------------------------*/
void escreva(int mat[N][M]){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("% 4d", mat[i][j]);
        }
        printf("\n");
    }
}
/*--------------------------------------------------------------*/
int soma_matriz(int mat[N][M],int li,int ci,int lf,int cf){
    int i,j,soma;
    soma = 0;
    for(j=ci;j<=cf;j++){
        for(i=li;i<N;i++){
            soma += mat[i][j];
            if (i==lf && j==cf) {
                break;
            }
        }
        li = 0;
    }
        return soma;
}
/*--------------------------------------------------------------*/
int main(){
    int mat[N][M] ={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    int li,ci,lf,cf;
    escreva(mat);
    printf("\n");
    printf("Escreva qual a linha e coluna inicial:");
    scanf("%d %d",&li,&ci);
    printf("Escreva qual a linha e coluna final:");
    scanf("%d %d",&lf,&cf);
    printf("Soma: %d",soma_matriz(mat,li,ci,lf,cf));
}