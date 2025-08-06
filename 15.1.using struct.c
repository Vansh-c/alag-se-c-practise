// to check upper case or lowercase using stcut 


#include <stdio.h> 
#include <ctype.h>

typedef struct{
  char str ; 
} string ; 


void check_case(char s){
    if(s == toupper(s)){
        printf("UPPERCASE") ; 
    }
    else{
        printf("LOWERCASE") ;
    }
}


int main()
{
    string s   ; 
    printf("enter the character \n") ; 
    scanf("%c", &s.str) ;

    check_case(s.str) ;


    return 0 ;
}