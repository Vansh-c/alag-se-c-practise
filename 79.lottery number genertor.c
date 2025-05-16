// a program to print the lottery number 


#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#include <stdbool.h>



int main()
{
    srand(time(NULL)) ; 

    int number ; 
    int numbers[6] ;     // to keep track of number generated so far .
    bool unique;  

    for(int i = 0 ; i<6 ; i++){
        // to generate a unique number 

        do{
            number = (rand()%6) + 1 ; 
            // start with the assumption number is true
            unique = true;  

            for(int j = 0 ; j<i; j++){
                if(numbers[j] == number){
                    unique = false ; 
                }
            }
            // try again until number we have generated so far is not unique . 
        }while(!unique) ;

        // add the numbers to the numbers array and print it out 
        numbers[i] = number ; 
        printf("number %d : %d \n" , i+1 , number) ;
    }

    return 0 ;
}