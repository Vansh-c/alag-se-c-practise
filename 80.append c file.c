// program to append characters in a given c file . 


#include <stdio.h> 
#include <string.h> 
#include <stdbool.h>


int main()
{
    FILE *f ; 

    char buffer[100] ; 

    f = fopen("80.1.txt" , "a"); 


    if(f == NULL){
        printf("sorry , some error occured \n") ; 
        return 1 ;
    } 

    printf("enter quit to exit \n\n") ; 

    while(true){
        fgets(buffer , 100 , stdin) ; 

        if(strcmp(buffer , "quit\n") == 0){
            break;
        }

        fputs(buffer , f) ; 
      
    }


    return 0 ; 
}