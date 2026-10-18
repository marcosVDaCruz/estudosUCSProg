#include <stdio.h>
#include <string.h>

#define N 9

int hex2dec(char str[N]){
    int i, mult=1, dec=0;
    for(i=strlen(str)-1;i>=0;i--){
        if(str[i] >= '0' && str[i] <= '9'){
            dec += (str[i]-'0')*mult;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            dec += (str[i]-55)*mult;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            dec += (str[i]-87)*mult;
        }
        mult *= 16;
    }
    return dec;
}

int main(){
    char str[N];
    printf("Digite o valor em hexadecimal:\n");
    scanf("%s",str);
    printf("Decimal: %d\n",hex2dec(str));
}