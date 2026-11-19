#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* ----------------------------------------------------------- */
#define N 4
/* ----------------------------------------------------------- */
void le_matriz(int m[N][N]){
	int i,j;
	srand(time(NULL));
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			m[i][j] = rand() % 10;
		}
	}
}
/* ----------------------------------------------------------- */
void escrever_matriz(int m[N][N]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%5d",m[i][j]);
		}
	printf("\n");
}
/* ----------------------------------------------------------- */
int principal(int m[N][N]){
	int i,soma=0;
	for(i=0;i<N;i++){
		soma += m[i][i];
	}
	return soma;
}
/* ----------------------------------------------------------- */
int secundaria(int m[N][N]){
	int i,soma=0;
	for(i=N-1;i>=0;i--){
		soma += m[i][i];
	}
	return soma;
}
/* ----------------------------------------------------------- */
int acima(int m[N][N]){
	int i,j,soma=0;
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			soma += m[i][j];
		}
	}
	return soma;
}
/* ----------------------------------------------------------- */
void transposta(int m[N][N]){
	int i,j;
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			aux = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = aux;
		}
	}
}
/* ----------------------------------------------------------- */
int main(){
	int m[N][N];
	le_matriz(m);
	escrever_matriz(m);
	transposta(m);
	escrever_matriz(m);
	printf("Diagonal principal: %d\n",principal(m));
	printf("Diagonal secundaria: %d\n",secundaria(m));
	printf("Acima: %d\n",acima(m));
}
