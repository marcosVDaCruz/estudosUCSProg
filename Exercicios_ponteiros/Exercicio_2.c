#include <stdio.h>
#include <string.h>

/*----------------------------------------------------------------------*/
void verificadores(char *cpf, int *d1, int *d2){
    int i;
    int soma = 0;
    int resto;
    int mult;

    /* Calcula o primeiro digito verificador */
    mult = 10;

    for(i = 0; i < 9; i++){
        soma += (cpf[i] - '0') * mult;
        mult--;
    }

    resto = soma % 11;

    if(resto < 2){
        *d1 = 0;
    }
    else{
        *d1 = 11 - resto;
    }

    /* Calcula o segundo digito verificador */
    soma = 0;
    mult = 11;

    for(i = 0; i < 9; i++){
        soma += (cpf[i] - '0') * mult;
        mult--;
    }

    soma += (*d1) * 2;

    resto = soma % 11;

    if(resto < 2){
        *d2 = 0;
    }
    else{
        *d2 = 11 - resto;
    }
}
/*----------------------------------------------------------------------*/
int main(){
    char cpf[] = "190025215";
    int d1, d2;

    verificadores(cpf, &d1, &d2);

    printf("CPF: %s DV1: %d DV2: %d\n", cpf, d1, d2);

    return 0;
}