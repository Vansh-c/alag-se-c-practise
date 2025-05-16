// program to reverse the string 


#include <stdio.h> 
#include <string.h>

void reverse(char *s){

    if(*s != '\0'){
        reverse(s + 1);
        printf("%c" , *s) ; 
    } 
}


int main()
{
    char s[100] ; 
    gets(s) ;

    reverse(s);
    return 0 ;
}