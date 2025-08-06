// factorial variation using struct 
#include <stdio.h>

typedef struct{
    int n ; 
} num ; 

int fact(int) ; 

float ncr(float r , float n){

    return fact(n) / fact(r)/ fact(n-r) ; 
}

int fact(int n){

    if(n==0 || n==1){
        return 1 ; 
    }

    int r = 1 ; 

    for(int i = 1 ; i<=n ; i++){
            r = i*r ; 
    }

    return r ; 
}


int main()
{
    num number ; 
    int n ; 

    printf("enter the number \n") ; 
    scanf("%d" , &number.n) ;
    scanf("%d" , &n) ; 

    printf("ncr = %.2f" , ncr(3 , number.n)) ;

    printf("\n") ; 
    int sum = 0 ; 

    for(int i = 0 ; i<n ; i++){
        sum = sum + ncr(i , number.n) ; 
    }

    printf("sum = %d" , sum);

    return 0 ;
}