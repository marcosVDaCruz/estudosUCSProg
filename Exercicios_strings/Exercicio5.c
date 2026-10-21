/* 5) Idem ao anterior, mas sem distinção de maiúsculas e minúsculas. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(const char str[]){
    int i,j;
    for(i=0,j=strlen(str)-1;i<j;i++,j--){
        if(tolower((unsigned char)str[i]) != tolower((unsigned char)str[j])){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[20];

    printf("Digite uma palavra: ");
    scanf(" %19s", str);

    printf("Retorno: %d\n", palindromo(str));
}