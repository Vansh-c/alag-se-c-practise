// program to check if string ends with another stirng 


#include <stdio.h> 
#include <string.h> 
#include <stdbool.h>

bool endswith(char *str , char *end) ; 


int main()
{
    char str[] = "The black getsuga tenshou" ; 
    char ok[] = "tenshou"; 

    if(endswith(str , ok)){
        printf("yes") ; 
    }
    else{
        printf("no ") ;
    }
    return 0;
}


bool endswith(char *str , char *end){
    int str_length = strlen(str) ; 
    int end_length = strlen(end) ; 

    if(end_length>str_length){
        return false ; 
    }

    for(int i = 0 ; i<end_length ; i++){
        if(str[str_length - i] != end[end_length - i]){
            return false ; 
        }
    }

    return true ; 

}
