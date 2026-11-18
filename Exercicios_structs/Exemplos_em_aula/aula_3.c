#include <stdio.h>

struct horario{
    int h,m,s;
};
typedef struct horario HORARIO; // A mesma coisa que "import as" em python;

/*
typedef struct horario{
    int h, m, s;                // Outra forma de escrever a struct;
} HORARIO;
*/

HORARIO proximo(HORARIO atual){
    int total = atual.h*3600 + atual.m*60 + atual.s + 1;
    struct horario res;
    res.h = (total / 3600) % 24;
    total %= 3600;
    res.m = total / 60;
    res.s = total % 60;
    return res;
}

int main(){
    HORARIO atual,prox;

    printf("Digite o horario:\n");
    scanf("%d%d%d",&atual.h,&atual.m,&atual.s);
    prox = proximo(atual);
    printf("%d:%d:%d\n",prox.h,prox.m,prox.s);
}