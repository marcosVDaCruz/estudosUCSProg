#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 6

void escreva(float mat[N][M]){

    int i, j;

    srand(time(NULL));

    for(i = 0; i < N; i++){

        for(j = 0; j < M; j++){

            mat[i][j] = rand() % 10;

        }

    }

}

void ler(float mat[N][M]){

    int i, j;

    for(i = 0; i < N; i++){

        for(j = 0; j < M; j++){

            printf("%.2f ", mat[i][j]);

        }

        printf("\n");

    }

}

void moduloMat(float mat[N][M]){

    int i, j;
    float menor;

    for(i = 0; i < N; i++){

        menor = mat[i][0];

        if(menor < 0){
            menor = -menor;
        }

        for(j = 1; j < M; j++){

            float modulo = mat[i][j];

            if(modulo < 0){
                modulo = -modulo;
            }

            if(modulo < menor){
                menor = modulo;
            }

        }

        for(j = 0; j < M; j++){

            mat[i][j] = mat[i][j] / menor;

        }

    }

}

int main(){

    float mat[N][M];

    escreva(mat);

    printf("Matriz original:\n");
    ler(mat);

    moduloMat(mat);

    printf("\nMatriz modificada:\n");
    ler(mat);

    return 0;
}