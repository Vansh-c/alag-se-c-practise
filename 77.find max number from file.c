// program to find max number from the file 

#include <stdio.h>
#include <stdlib.h>


int main()
{

    char buffer[1000] ; 
    double current, max ; 
    double numbers = 0 ; 

    FILE *f ; 
    
    f = fopen("77.1.number.txt" , "r") ; 


    if(f == NULL){
        printf("some error occured !") ; 
        return 1 ;
    }
    

    while(fgets(buffer , 1000 , f)!= NULL){
        current = atof(buffer) ; 


        if(numbers == 0){
            max = current ; 
        }
        else if(current>max){
            max = current ; 
        }

        numbers++ ; 

    }
    fclose(f);


    printf("the maximum numbers among %.2f numbers is %.2f" , numbers , max) ; 
    return 0 ; 
}