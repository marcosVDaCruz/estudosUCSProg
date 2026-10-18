#include <stdio.h>
#define N 10

void duplica(char s[N], char s2[N]){
    int i,j;
    for(i=0,j=0;s[i]!='\0';i++){
        s2[j] = s[i];
        j++;
        s2[j] = s[i];
        j++;
    }
}

int tamanho(char s[N]){
    int i,tam;
    for(i=0,tam=0;s[i]!='\0';i++);
    return i;
}

int main(){
    char s[N],s2[N];

    printf("Digite a string:\n");
    scanf("%s",s);

    printf("Tamanho: %d\n", tamanho(s));

    //duplica(s,s2);
    //printf("%s\n",s2);
}