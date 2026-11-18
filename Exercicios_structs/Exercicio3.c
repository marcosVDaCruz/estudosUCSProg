/* 3) Faça um programa que leia os dados relativos a N alunos (o valor N é definido pela diretiva #define), Após a entrada dos dados o programa deve escrever o nome e a média aritmética dos alunos. Os alunos devem estar organizados em ordem decrescente em relação a média final e se dois alunos tiverem a mesma  média eles deverão ser organizados em ordem alfabética. */

#include <stdio.h>
#include <string.h>

#define N 3

typedef struct aluno{
    char nome[50];
    float nota1, nota2, nota3;
} ALUNO;

void ler(ALUNO v[N]){
    int i;
    for(i=0; i<N; i++){
        printf("Digite um nome: ");
        fgets(v[i].nome,sizeof(v[i].nome),stdin);
        v[i].nome[strcspn(v[i].nome, "\n")] = '\0';

        printf("Digite a 1ª nota: ");
        scanf("%f", &v[i].nota1);

        printf("Digite a 2ª nota: ");
        scanf("%f", &v[i].nota2);

        printf("Digite a 3ª nota: ");
        scanf("%f", &v[i].nota3);

        getchar();
    }
}

int main(){
    ALUNO v[N];

    ler(v);
//    escreve(v);
}