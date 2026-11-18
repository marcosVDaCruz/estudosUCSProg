#include <stdio.h>

#define N 4

typedef struct data {
    int d,m,a;
} DATA;

void ler(DATA v[N]){
    int i;
    for(i=0;i<N;i++){
        printf("Digite a data:\n");
        scanf("%d%d%d", &v[i].d, &v[i].m, &v[i].a);
    }
}

void escreva(DATA v[N]){
    int i;
    for(i=0;i<N;i++){
        printf("%d/%d/%d\n",v[i].d,v[i].m,v[i].a);
    }
}

int compara(DATA n1,DATA n2){
    int aux1 = n1.a*10000 + n1.m*100 + n1.d;
    int aux2 = n2.a*10000 + n2.m*100 + n2.d;
    int ret;

    if(aux1 < aux2){
        ret = -1;
    }
    else if(aux1 == aux2){
        ret = 0;
    }
    else {
        ret = 1;
    }
    return ret;
}

void ordenar(DATA v[N]){
    int i,j;
    DATA aux;
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1-i;j++){
            if(compara(v[j],v[j-1]) > 0){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int main(){
    DATA v[N];
    ler(v);
    printf("\n");
    escreva(v);
    ordenar(v);
    printf("\n");
    escreva(v);
}