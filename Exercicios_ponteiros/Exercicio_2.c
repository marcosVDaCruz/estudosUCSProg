#include <stdio.h>
/*----------------------------------------------------------------------*/
void verificadores(char *cpf){

}
/*----------------------------------------------------------------------*/
int main(){
    char cpf[] = "190025215"; //53
    int d1, d2;
    verificadores(cpf, &d1, &d2);
    printf("CPF: %s dv1: %d dv2: %d\n", cpf, d1, d2);
}