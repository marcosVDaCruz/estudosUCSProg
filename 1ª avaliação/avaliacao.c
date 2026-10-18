#include <stdio.h>
/*--------------------------------------------------------------*/
#define N 3
#define M 4
/*--------------------------------------------------------------*/
void escreve(int m[N][M]) {
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("% 4d", m[i][j]);
        }
        printf("\n");
    }
}
/*--------------------------------------------------------------*/
void ordenar_matriz_crescente(int m[N][M]) {
    int i,j,k,aux;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            for(k=j+1;k<M;k++){
                if(m[i][j]>m[i][k]){
                    aux = m[i][j];
                    m[i][j] = m[i][k];
                    m[i][k] = aux;
                }
            }
        }
    }
}
/*--------------------------------------------------------------*/
int soma(int m[N][M],int linha) {
    int j, s=0;
    for (j=0;j<M;j++){
        s += m[linha][j];
    }
    return s;
}
/*--------------------------------------------------------------*/
void ordena_linhas(int m[N][M]){
    int i,j,k,aux;
    for(j=0;j<N-1;j++){
        for(i=0;i<N-1;i++){
            if(soma(m,i)<soma(m,i+1)){
                for(k=0;k<M;k++){
                    aux = m[i][k];
                    m[i][k] = m[i+1][k];
                    m[i+1][k] = aux;
                }
            }
        }
    }
}
/*--------------------------------------------------------------*/
int main() {
    int linha;
    int m[N][M] = { {4,8,3,2},
                    {9,1,6,3},
                    {10,2,9,6}};
    escreve(m);
    printf("\n");
//    ordenar_matriz_crescente(m);
//    escreve(m);
    ordena_linhas(m);
    printf("\n");
    escreve(m);
}