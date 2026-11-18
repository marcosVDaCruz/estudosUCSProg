#include <stdio.h>
#include <stdlib.h>

int escreva_vetor(int *v, int n){

}

int main(){
    int *v = NULL;                             //Cria um pointer que aponta para NULL(vazio);

    v = (int *)malloc(5*sizeof(int));
    if(v == NULL){
        printf("Erro na alocação\n");
        return 0;
    }

    int i;
    for(i=0; i<5; i++){
        v[i] = i;
    }
    escreva_vetor(v,5);
    free(v);                                    //Libera o vetor ocupado para uso;
}