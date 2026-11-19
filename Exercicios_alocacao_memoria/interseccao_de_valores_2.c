//Cenario mais custoso, por causa do realloc();

#include <stdio.h>
#include <stdlib.h>

void escreve(int *v, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n", v[i]);
    }
    printf("------------------------------\n");
}

int * interseccao(int *v1, int n1, int *v2, int n2, int *t){
    *t = 0;
    int i,j,k;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(v1[i] == v2[j]){
                (*t)++;                 //Incremento de ponteiros;
            }
        }
    }
    int *v3 = (int*)malloc(*t * sizeof(int));
    if(v3 != NULL){
        k = 0;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                if(v1[i] == v2[j]){
                    v3[k++] = v1[i];
                }
            }
        }
        v3 = (int *)realloc(v3, k * sizeof(int));
        *t = k;
    }
    return v3;
}

int main(){
    int v1[3] = {2,3,7};
    int v2[4] = {6,2,7,0};
    int t;

    escreve(v1, 3);
    escreve(v2, 4);

    int *v3 = interseccao(v1,3,v2,4,&t);
    if(v3 != NULL){
        escreve(v3, t);
        free(v3);
    }
}