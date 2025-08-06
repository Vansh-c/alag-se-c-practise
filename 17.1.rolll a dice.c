// prgoram to roll a dice using struct 

#include <stdio.h>
#include <time.h> 
#include <stdlib.h>


typedef struct{

    int num ; 
}random ; 


void roll(){
    random  dice ; 
    srand(time(NULL)) ; 
    int roll = 0 ;
    dice.num = 1  ; 
    do{
     printf("enter 1 to roll the dice and 0 to exit \n");
     scanf("%d" ,&dice.num);

     if(dice.num == 1){
        int result = rand()%6 + 1 ; 
        printf("DICE: ") ; 
        printf("%d\n" , result) ;
     }

     if(dice.num==0){
        printf("thanks for playing") ;
     }
    }while(dice.num!=0) ;
}


int main()
{

    roll() ;
    return 0 ;
}