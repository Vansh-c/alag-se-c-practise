// using struct to print characters till newline 

#include <stdio.h> 
#include <string.h>

typedef struct{
    char s[100];
} string;  


void newline(char *s , int l){
    int i = 0 ; 
    while(s[i]!='\n' && s[i]!='\0'){
        printf("%c" , s[i]) ; 
        i++ ;
    }
}

int main()
{
    string str; 
    fgets(str.s , 100 , stdin) ;

    newline(str.s  , strlen(str.s));

    return 0 ;
}