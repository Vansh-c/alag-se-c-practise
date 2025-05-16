#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 



int main()
{

  srand(time(NULL)) ; 
  int num = randint()%10 + 1 ; 
  int guess ; 
  int chance = 0 ; 

  do{
     printf("enter your guess \n"); 
     scanf("%d" , &guess) ; 
    
  }while(chance<3);

  return 0 ;
}