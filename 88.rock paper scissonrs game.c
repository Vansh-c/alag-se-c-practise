// to make rock paper scissors game 


#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <stdbool.h> 

#define ROCK 1 
#define PAPER 2 
#define SCISSORS 3



int main()
{
    srand(time(NULL)) ; 
    int player = 0 ; 
    int ai_threw = 0 ; 
    bool draw = false ; 


    do{
        // player throw 

        printf("\n select your throw : \n") ; 
        printf("1. ROCK \n") ; 
        printf("2. PAPER \n") ; 
        printf("3. SCISSORS \n") ;

        scanf("%d" , &player) ; 
        ai_threw = rand()%3 + 1;

        draw = false ; 

        if(player == ROCK && ai_threw == SCISSORS){
            printf("player won \n") ; 
        }
        else if(player == SCISSORS && ai_threw == ROCK){
            printf("player lost , ai won \n") ; 
        }

        else if(player == SCISSORS && ai_threw == PAPER){
            printf("player won \n") ; 
        }

        else if(player == PAPER && ai_threw == SCISSORS){
            printf("player lost , ai won \n") ; 
        }

        else if(player == PAPER && ai_threw == ROCK){
            printf("player won \n") ; 
        }

        else if(player == ROCK && ai_threw == PAPER){
            printf("player lost , ai won \n") ; 
        }

        else{
            printf("it's a draw , play again ! \n") ; 
            draw = true;
        }
    }while(true) ;

    return 0 ;
}