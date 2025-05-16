// this is program to convert binary values to decimal values 

#include <stdio.h>
#include <string.h>

int btd(char *n);

int main(){
    char s[] = "1111";
    printf("%d" , btd(s));
    return 0;
}

int btd(char n[]){
    int slen = strlen(n);
    int total = 0 ;
    int decimal_value = 1 ;
    for(int i = (slen -1) ; i>=0 ; i--){
        if(n[i] == '1'){
            total = total + decimal_value;
        }
        decimal_value = decimal_value*2;
    }

    return total;
}

