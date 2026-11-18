#include <stdio.h>
#include <stdlib.h>

int * cria_vetor(int n){
    int i, *v = NULL;

    v = (int *)malloc(n*sizeof(int));

    if(v == NULL){
        return 0;
    }
    else{
        for(i=0; i<n; i++){
            v[i] = 10 * i;
        }
        return v;
    }
}

int main(){
    int *v = cria_vetor(6);
    int i;
    if(v != NULL){
        for(i=0; i<6; i++){
            printf("%d\n", v[i]);
        }
    }

    free(v);
}