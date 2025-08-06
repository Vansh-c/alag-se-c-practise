#include <stdio.h> 
#include <string.h>

typedef struct{
    char s[100] ; 
} string; 


void reverse_string(char *s , int l){
    if(*s!= '\0'){
        reverse_string(s + 1 , l) ;
        printf("%c" , *s) ;
    }
}


int main()
{
   string str; 
   printf("enterd the string \n") ; 
   fgets(str.s ,100 , stdin) ;

   reverse_string(str.s , strlen(str.s)) ;


    return 0 ; 
}