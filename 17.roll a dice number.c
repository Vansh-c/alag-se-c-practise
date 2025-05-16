#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   srand(time(NULL));
   int roll = 0 ; 
   int dice = 1 ;
   
   do{
    printf("enter 1 to roll the dice  0 to quit this loop \n");
    int num;
    scanf("%d",&num);
    if(num == 1){
        int random = rand()%6 + 1;
        printf("DICE:%d \n",random);
    }
    else if(num == 0){
        printf("your exited the dice game \n");
        dice-- ; 
    }
    else{
        printf("please enter number 0 and 1 \n");
    }
   }
   while(dice!=0);
    return 0;
}