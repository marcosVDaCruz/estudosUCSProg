#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
/* ---------------------------------------------------------------------- */
#define N 2
/* ---------------------------------------------------------------------- */
struct camiseta{
    char cliente[50];
    char cor[15];
    char tam;
};
typedef struct camiseta CAMISA;
/* ---------------------------------------------------------------------- */
void ler(CAMISA v[N]){
    int i;
    for(i=0;i<N;i++){
        printf("Digite o nome do cliente: ");
        scanf("%s",&v[i].cliente);

        printf("Digite a cor: ");
        scanf("%s",&v[i].cor);

        printf("Digite o tam(P,M,G): ");
        scanf("%c",&v[i].tam);
        printf("\n");
        __fpurge(stdin);
    }
}
/* ---------------------------------------------------------------------- */
void ordena(CAMISA v[N]){
    int i,j;
    CAMISA aux;
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1;j++){
            if(strcasecmp(v[j].cor,v[j+1].cor)>0){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
            else if(strcasecmp(v[j].cor,v[j+1].cor)==0 && v[j].tam < v[j+1].tam){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;           
            }
            else if(strcasecmp(v[j].cor,v[j+1].cor)==0 && v[j].tam == v[j+1].tam && strcasecmp(v[j].cliente, v[j+1].cliente) > 0){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux; 
            }
        }
    }
}
/* ---------------------------------------------------------------------- */
void escreve(CAMISA v[N]){
    int i;
    for(i=0;i<N;i++){
        printf("%-20s | %-10s | %c\n", v[i].cliente, v[i].cor, v[i].tam);
    }
}
/* ---------------------------------------------------------------------- */
int main(){
    CAMISA v[N];
    ler(v);
    ordena(v);
    escreve(v);
}

// Consertar erro na parte do ler();