#include <stdio.h>
/*--------------------------------------------------------------*/
void escreverCal(int cal[6][7]){
	int i,j;
	char d[8] = 
	for(i=0;i<6;i++){	
		for(j=0;i<7;j++){
			printf("% 4d", cal[i][j]);
		}
		printf("\n");
	}
}
/*--------------------------------------------------------------*/
void geraCal(int cal[6][7], int m,int a,int ci){
	int total = totalDias(m,a);
	int i,j,d=1;
	for(i=0;i<6;i++){
		for(j=0;j<7;j++){
			if(i==0 && j<ci){
				cal[i][j] = 0;
			}
			else if(d>total){
				cal[i][j] = 0;
			}
			else{
				cal[i][j] = d++;
			}
		}
	}
}
/*--------------------------------------------------------------*/
int main(){
	int cal[6][7];
	int col,m,a;
	printf("Digite o mes do ano:\n");
	scanf("%d %d", &m,&a);
	printf("Digite a coluna que comeca o mes:\n");
	scanf("%d",&col);
	geraCal(cal,m,a,col);
	escreverCal(cal);
}
