// write lines of user input to a file 

#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

#define Buffer_size 100 ; 


int main()
{
    char buffer[100] ; 
    bool keep_going = true ; 

    FILE *f ; 

    f = fopen("76.1.output.txt" , "w");

    if(f == NULL){
        printf("error opening file \n") ; 
        return 1 ; 
    }






    while(keep_going){
        fgets(buffer , 100 , stdin) ;                 // here parameters of fgets are buffer , size of buffer and stdin(standard input)

        if(strcmp(buffer, "quit\n") == 0){
            keep_going = false ; 
        }
        else{
            fputs(buffer,  f) ; 
        }
    }

    fclose(f) ;
    return 0 ; 
}
