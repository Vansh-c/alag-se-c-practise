// Fibonacci  sequence : a sequence created   by two numbers starting with two numbers 0 and 1. 


#include <stdio.h>

int main()
{
    int length ;
    int i ;
    int fibnacci = 0;
    int term1= 0;
    int term2 = 1;


do{
    printf("enter the length upto which you want to find fibonacci series \n");
    scanf("%d",&length);
    if(length<3){
        printf("Please enter the length more than 3 \n");
    }}
    while(length<3);


    printf("%d %d",term1 , term2);

    for(int i = 0 ; i<length;i++){
        
        fibnacci = term1 + term2;
        term1 = term2;
        term2 = fibnacci;
        printf("%d \n",fibnacci );

        if(i == (length - 1)){
            break;
        }
    }
    return 0;
}


