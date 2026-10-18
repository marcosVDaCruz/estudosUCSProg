#include <stdio.h>
#include <stdio_ext.h>  // Para a função fpurge
/* ---------------------------------------------------------------------- */
#define N 2
/* ---------------------------------------------------------------------- */
struct data{
    int d,m,a;
};
typedef struct data DATA;

struct livro{
    char nome[50];
    char autor[50];
    DATA edicao;
};
typedef struct livro LIVRO;
/* ---------------------------------------------------------------------- */
void le_livros(LIVRO v[N]){
    int i;
    for(i=0;i<N;i++){
        printf("Digite o nome do livro: \n");
        fgets(v[i].nome,sizeof(v[i].nome),stdin);
        printf("Digite o autor: \n");
        fgets(v[i].autor,sizeof(v[i].autor),stdin);;
        printf("Digite a data de edição: \n");
        scanf("%d%d%d",&v[i].edicao.d, &v[i].edicao.m, &v[i].edicao.a);
        __fpurge(stdin);
    }
}
/* ---------------------------------------------------------------------- */
void escreve_livros(LIVRO v[N]){
    int i;
    for(i=0;i<N;i++){
        printf("Nome do livro: %s",v[i].nome);
        printf("Nome do autor: %s",v[i].autor);
        printf("Data da edição: %d/%d/%d\n",v[i].edicao.d,v[i].edicao.m,v[i].edicao.a);
        printf("\n");
    }
}
/* ---------------------------------------------------------------------- */
int cmp_data(DATA d1, DATA d2){
    int n1 = d1.a*10000 + d1.m*100 + d1.d;
    int n2 = d2.a*10000 + d2.m*100 + d1.d;
    return n1-n2;
}
/* ---------------------------------------------------------------------- */
void ordena_livros(LIVRO v[N]){
    LIVRO aux;
    int i,j;
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1;j++){
            if(cmp_data(v[j].edicao,v[j+1].edicao)>0){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
/* ---------------------------------------------------------------------- */
int main(){
    LIVRO v[N];
    le_livros(v);
    ordena_livros(v);
    escreve_livros(v);
}