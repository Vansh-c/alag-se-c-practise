#include <stdio.h> 
#include <time.h>
#include <stdlib.h>

typedef struct{
    int num; 
} var ; 

int main()
{
    var n ; 
    srand(time(NULL)) ;
    int number = rand()%10 + 1 ;
    int score = 100 ; 
    
    
    do{
        printf("enter the number \n") ; 
        scanf("%d" , &n.num) ;

        if(n.num<0){
            printf("thanks for playing \n") ; 
            break;  
        }
        score = score - 1 ; 


    }while(n.num!= number) ;

    printf("you won! your score is %d" , score) ;

    return 0 ;
}