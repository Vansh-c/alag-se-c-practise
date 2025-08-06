// here , variable is made but using struct to do the same 


#include <stdio.h> 

typedef struct{
    int n ; 
} num ; 


int sum(int n){
    if(n!=0){
    return n + sum(n-1) ;
    }
}

int main()
{
    num number ; 
    printf("enter the number \n");
    scanf("%d" , &number.n) ;

    printf("the sum of entered numbers is %d" , sum(number.n)) ; 
    return 0 ;
}