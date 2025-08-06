// using struct to initialize a number and making fibonacci series


#include <stdio.h> 

typedef struct{
    int n ; 
} number ; 

int fibonacci(int k){
    if(k==1 || k == 0){
        return k;
    }

    else{
        return fibonacci(k-1) + fibonacci(k-2) ;
    }
}

int main()
{
    number num ; 
    printf("enter the range \n") ; 
    scanf("%d", &num.n) ;

    for(int i = 0 ; i<num.n ; i++){
        printf("%d " , fibonacci(i)) ; 
    }

    return 0 ;
}