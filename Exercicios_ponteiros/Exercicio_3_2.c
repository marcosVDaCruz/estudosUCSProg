/* 3) Fazer uma função que calcule a partir de um horário inicial (hora e minuto) mais uma quantidade de minutos, o horário correspondente ao horario inicial adicionado a essa quantidade de minutos. */

#include <stdio.h>

typedef hora{
    int h,m;
} HORA;
/*----------------------------------------------------------------------*/
void calc_horario(HORA h1, int qtdmin, HORA *h2){
    int total = (h1.h * 60) + h1.m + qtdmin;
    (*h2).h = (total % 1440) / 60;       // h2->h = total / 60;
    (*h2).m = total % 60;       // h2->m = total % 60;
}
/*----------------------------------------------------------------------*/
int main(){
    HORA h1 = {22,50}, h2;
    int qtdmin = 1470;
    calc_horario(h1, qtdmin, &h2);
    printf("%d:%d\n",h2.h,h2.m);
}

//Checar em casa = erro;