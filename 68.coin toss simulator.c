// program to print coin toss simulator  . 


#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef enum coin  {heads , tails} coin ;

coin flip() ;



int main()
{
    srand(time(NULL));

    for(int i = 0; i<5 ; i++){
       if(flip() == heads){
        printf("HEADS \n");
       }

       else{
        printf("TAILS \n");
       }
    }

    return 0 ; 
}


coin flip(){
   if(rand()%2 ==0 ){
    return heads ; 
   }
   else{
    return tails ; 
   }
}