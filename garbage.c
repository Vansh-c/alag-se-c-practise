#include <stdio.h> 

int avg(int *a , int n){
    if(n>=1){
return *a + avg(a+1 , n-1) ; 
    }
    else{
        return 0 ; 
    }
}


int main()
{

    int a[] = {1,2,3,4,5,6,7} ; 

    int n = sizeof(a)/ sizeof(int) ; 

    printf("%.2f" ,(float) avg(a , n) / n) ;


    return 0 ;
}