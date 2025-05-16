// to check whether given number is armstrong or not


#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_armstrong(int num);


int main(){
    int n;
    printf("enter a number : \n");
    scanf("%d" , &n);

    if(is_armstrong(n)){
        printf("given number is armsrong ");
    }
    else{
        printf("given number is not armstrong");
    }
    return 0;
}


bool is_armstrong(int num){
    int total_digits = 0 ; 
    int digits_left = num ;

    while(digits_left != 0 ){
        total_digits++ ;
        digits_left = digits_left/10 ; 
    }

    int digit = 0 ;
    int total = 0 ; 
    int number_left = num ; 

    while(number_left !=0){
        digit = number_left %10 ;
        // total = total + (int)pow(digit , total_digits);
        // number_left = number_left/10 ; 

        int power = 1 ; 
        for( int i = 0 ; i<total_digits ; i++){
                power = power*digit;
        }

        total = total + power;
        number_left = number_left/10 ;
    }

    printf("%d \n" , total);

    return total == num ;
}
