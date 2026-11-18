#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * gera_senha(int n){
    char *s = NULL;
    int op, i;

    s = (char *)malloc((n+1) * sizeof(char)); 
    if(s != NULL){
        srand(time(NULL));
        for(i=0; i<n; i++){
            op = rand() % 3;
            switch(op){
                case 0: s[i] = rand() % 10 + '0';
                break;
                case 1: s[i] = rand() % 26 + 'A';
                break;
                case 2: s[i] = rand() % 26 + 'a';
                break;
            }
        }
        s[i] = '\0';
    }
    return s;
}

int main(){
    char *str = gera_senha(10);
    if(str != NULL){
        printf("%s\n",str);
        free(str);
    }
}