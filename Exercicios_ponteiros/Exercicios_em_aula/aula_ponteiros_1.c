#include <stdio.h>

int main(){
    int a = 3;
    int *p = NULL;
    p = &a;
    printf("Valor: %x Endereço: %x\n", p, &a);
    printf("Endereço: %x  %x\n", p, *p);  //Mostra para qual o ponteiro esta apontando.
}