// write an program to find average of number usinig recursion 


#include <stdio.h> 

int avg(int n){
    int sum = 0 ; 
    if(n == 0){
        return 0 ; 
    }
    else{
        return n+avg(n-1) ; 
    }
}

int main()
{
    printf("enter number n \n") ; 
    int n ; 
    scanf("%d" , &n) ; 
    printf("the average of the number is %d" , avg(n)/n) ; 
    return 0 ;
}