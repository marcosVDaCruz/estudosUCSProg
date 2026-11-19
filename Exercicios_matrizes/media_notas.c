#include <stdio.h>
#include <stdlib.h>
/*--------------------------------------------------------------*/
#define N 100
/*--------------------------------------------------------------*/
void gera(float notas[N][3]){
    int i;
    for(i=0;i<N;i++) {
        notas[i][0] = rand()%11;
        notas[i][1] = rand()%11;
        notas[i][2] = rand()%11;
    }
}
/*--------------------------------------------------------------*/
void escreve(float notas[N][3]){
    int i,j;
    for(i=0;i<N;i++){
        printf("% 6.2f % 6.2f % 6.2f\n", notas[i][0],notas[i][1],notas[i][2]);
    }
}
/*--------------------------------------------------------------*/
void conta(float notas[N][3],int cont[11]){
    int i,j;
    for(i=0;i<11;i++){
        cont[i] = 0;
    }
    float m;
    for(i=0;i<N;i++){
        m = (notas[i][0]+notas[i][1]+notas[i][2])/3;
        cont[(int)m]++;
    }
}
/*--------------------------------------------------------------*/
void histograma(int cont[11]) {
    int i,j;
    for(i=0;i<11;i++){
        printf("%d\n ", i);
        for(j=0;j<cont[i];j++){
            printf("*");
        }
        printf("\n");
    }
}
/*--------------------------------------------------------------*/
int main(){
    float notas[N][3];
    int cont[11];
    gera(notas);
    escreve(notas);
    printf("\n");
    conta(notas, cont);
    histograma(cont);
}