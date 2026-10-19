#include <stdio.h>

int main(){
    struct dma {
        int dia;
        int mes;
        int ano;
    }a;
    printf("Digite o dia, mes e ano:\n");
    scanf("%d%d%d",&a.dia,&a.mes,&a.ano);
    printf("%d %d %d\n",a.dia,a.mes,a.ano);
}