// using struct to print first repeating  character . 
#include <stdio.h> 
#include <string.h> 
#include <stdbool.h>



typedef struct{
    char s[100] ; 
}string ; 

void unique_char(char *s , int l){
     bool check ; 

     for(int i = 0 ; i<l ; i++){
        check =false ; 
        for(int j = 0 ; j<l ; j++){
            if(s[i] == s[j] && i!=j){
               check = true; 
               break;
            }
        }
        if(check){
            printf("%c" , s[i]) ; 
            break ;
        }
     }
    
}

int main()
{
    string str; 
    printf("enter the string \n") ;
    fgets(str.s , 100 , stdin) ;

    unique_char(str.s , strlen(str.s)) ;


    return 0 ;
}