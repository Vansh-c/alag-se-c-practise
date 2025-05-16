// to reverse  the string using recursionn 


#include <stdio.h> 
#include <string.h>

char append(char *s){
    int i = 0 ; 
    if(*s != '\0'){
        append(s + 1);
        printf("%c" , *s) ; 
    }
}


int main()
{
   char s[] = "this" ; 
   append(s) ;
   
    return 0 ;
}

