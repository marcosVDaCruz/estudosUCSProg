/* 3) Fazer uma função que calcule a partir de um horário inicial (hora e minuto) mais uma quantidade de minutos, o horário correspondente ao horario inicial adicionado a essa quantidade de minutos. */

#include <stdio.h>
/*----------------------------------------------------------------------*/
void calc_horario(int h1, int m1, int qtdmin, int *h2, int *m2){
    int total = (h1 * 60) + m1 + qtdmin;
    *h2 = total / 60;
    *m2 = total % 60;
}
/*----------------------------------------------------------------------*/
int main(){
    int h1 = 22, m1 = 50, h2, m2, qtdmin = 30;
    calc_horario(h1, m1, qtdmin, &h2, &m2);
    printf("%d:%d\n",h2,m2);
}