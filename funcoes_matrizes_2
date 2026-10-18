#include <stdio.h>
/*---------------------------------------------------*/
#define N 4
/*---------------------------------------------------*/
void ler(int m[N][N]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&m[i][j]);
		}
	}
}
/*---------------------------------------------------*/
void escrever(int m[N][N]) {
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("% 4d",m[i][j]);
		}
	printf("\n");
}
/*---------------------------------------------------*/
int identidade(int m[N][N]) {
	int i,j;
	for (i=0;i<N;i++) {
		for (j=0;j<N;j++) {
			if (i==j && m[i][j]!=1){
				return 0;
			}
			else if (i!=j && m[i][j]!=0) {
				return 1;
			}
		}
	}
}
/*---------------------------------------------------*/
int quadradoMagico(int m[N][N]) {
	int i,j,sp,ss,sl,sc;
	sp=ss=0;
	for (i=0;i<N;i++){
		sp+= m[i][i];
		ss+= m[i][N-1-i];
	}
	if (ss != sp){
		return 0;
	}
	for (i=0;i<N;i++){
		sl = 0;
		for (j=o;j<N;j++){
			sl += m[i][j];
		}
		if (sl != sp){
			return 0;
		}
	}
	for (j=0;j<N;j++){
		sc = 0;
		for (i=0;i<N;i++){
			sc += m[i][j];
		}
		if (sc != sp){
			return 0;
		}
	}
	return 1;
}
/*---------------------------------------------------*/
void soma(int m[N][N],int v[N+1]){
	int j,i,soma,vai=0;
	for (j=N-1;j>=0;j--){
	soma = vai;
		for (i=0;i<N;i++){
			soma += m[i][j];
		}
		v[N+1] = soma % 10;
		vai = soma / 10;
	}
	v[0] = vai;
}
/*---------------------------------------------------*/
int main() {
	int m[N][N];
	int v[N+1],i;
	ler(m);
	escrever(m);
	printf("Identidade: %d\n",quadradoMagico(m));
	soma(m,v);
	for (i=0,i<N+1;i++){
		printf("%d", v[i]);
	}
}
