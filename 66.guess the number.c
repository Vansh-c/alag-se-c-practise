// program to guess the number 


#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
    srand(time(NULL)) ; 
    int number = (rand()%10) + 1 ;
    printf("%d \n" , number) ; 
    int guess ; 

    do{
        printf("enter guess \n"); 
        scanf("%d" , &guess) ; 

        if(guess == number){
            printf("congrats! you won") ; 

        }
        else if(guess>number){
            printf("guess a little lower") ; 
        }

        else {
            printf("guess a little highter") ;
        }
    }while(guess!=number) ;


    return 0 ;
}