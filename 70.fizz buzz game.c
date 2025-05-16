// program to make fizzbuzz game 


#include <stdio.h> 


int main()
{
    for(int i = 0  ; i<100 ; i++){

        if(i%3 == 0 && i%5 == 0){
            printf("fizz Buzz \n");
        }
        else if(i%3 == 0){
            printf("fizz \n" ); 
        }

        else if(i%5 == 0){
            printf("Buzz \n") ;
        }

        else{
            printf("%d \n" , i) ;
        }
    }
}