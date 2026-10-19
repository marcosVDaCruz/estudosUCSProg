#include <stdio.h>

typedef struct data {
    int d,m,a;
} DATA;

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

int main(){
    DATA n1 = {8,10,2026},n2 = {10,10,2026};
    printf("Retorno: %d\n",compara(n1,n2));
}