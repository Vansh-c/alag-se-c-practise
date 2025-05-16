// to find sun of n natural numbers using recureisn 


#include <stdio.h>

int add(int n){
    int sum = 0;
    
    if(n>=0){
        return n + add(n-1);
    }

    else{
        return 0;
    }
}

int main(){

    printf("enter the number upto which u want to find sum \n");
    int num ; 
    scanf("%d" , &num);

    printf("the sum of N natural number is : %d" , add(num));
    return 0 ;
}