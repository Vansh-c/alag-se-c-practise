// using struct to find length of string

#include <stdio.h> 
#include <string.h>

typedef struct{
    char s[100]; 
} string; 


void count_length(char *s , int *l){
     int i = 0 ; 
     while(s[i]!='\0'){
        (*l)++ ; 
        i++ ; 
     }
}

int main()
{
    string str;  
    fgets(str.s , 100 , stdin) ;

    str.s[strlen(str.s)- 1] = '\0' ; 
    int length = 0 ; 

    count_length(str.s , &length ) ; 

    printf("the length of the entered string is %d" , length) ;


    return 0 ;
}