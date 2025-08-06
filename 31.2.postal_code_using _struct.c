// to make postal code using struct 

#include <stdio.h> 
#include <string.h>
#include <stdbool.h> 
#include <ctype.h> 


typedef struct{
    char code[100] ; 
} entered_code ; 


bool check_code(char *s , int l){
    if(l>=7 || l<6){
        return false ; 
    }

    for(int i = 0 ; i<l ; i++){
        if(s[i] == ' '){
            return false ;
        }

        if(!isdigit(s[i])){
            return false ; 
        }
    }

    return true ; 
}


int main()
{

    entered_code c ; 
    fgets(c.code , 100 , stdin) ; 
    c.code[strlen(c.code)-1]  = '\0' ;
    int len = strlen(c.code) ;
    
    if(check_code(c.code , len)){
        printf("postal code verified ");
    }
    else{
        printf("postal code is invalid") ; 
    }


    return 0 ;
}