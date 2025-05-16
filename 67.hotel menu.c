// to make a menu 


#include <stdio.h> 
#include <stdbool.h>
#include <stdlib.h> 

int main()
{

    double balance = 0 , amount = 0 ;
    int choice = 0 ; 

    while(true){
        printf("1. Deposit \n");
        printf("2.Withdraw \n");
        printf("3.Print Balance \n") ;
        printf("4.Print Balance and Quit \n") ;
        printf("5. Quit \n") ; 
        printf("Enter Choice : \n");
        scanf("%d" , &choice) ; 

        switch(choice){
            case 1:
              printf("enter amount \n");
              scanf("%lf" , &amount) ;
              balance = balance + amount ;
              break; 


            case 2 : 
              printf("enter amount \n");
              scanf("%lf" , &amount) ;
              balance = balance - amount ;
              break; 


            case 3:
               printf("%.2f \n", balance);
               break; 

            case 4:
               printf("%.2f"  , balance) ;

            case 5:
               exit(0) ;
               
        }

    }
    return 0 ; 
}