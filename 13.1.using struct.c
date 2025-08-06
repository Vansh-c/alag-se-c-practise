#include <stdio.h>

typedef struct{
    int num ; 
} numbers ; 


int main()
{
    numbers n ; 

    printf("enter the number \n") ; 
    scanf("%d" , &n.num) ;

    printf("the factors of entered numbers are \n") ;

    for(int i = 1 ; i<n.num ; i++){
        if(n.num%i == 0){
            printf("%d \n" , i) ;
        }
    }


    return 0 ;
}