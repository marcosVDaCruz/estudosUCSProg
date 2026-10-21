/* 4) A função deverá retornar 1 caso a string for palíndromo e 0 caso contrário. */

#include <stdio.h>
#include <string.h>

int palindromo(const char str[]){
    int i,j;
    for(i=0,j=strlen(str)-1;i<j;i++,j--){
        if(str[i] != str[j]){
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