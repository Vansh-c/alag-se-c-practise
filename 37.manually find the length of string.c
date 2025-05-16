// in this questions we will calulate the length of string 

#include <stdio.h>

int main(){
    char str[] = "this is string";

    int len = 0 ;
    int i = 0 ;

    while(str[i] != '\0'){
        len++ ; 
        i++;
    }

    printf("the length of the given string is %d" , len);


}