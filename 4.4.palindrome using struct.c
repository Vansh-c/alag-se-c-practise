// here we will make palindrom using struct 


#include <stdio.h> 
#include <stdbool.h>

typedef struct{
    int num ;
} number ; 


bool palindrome(int num){
    int orig_num = num ; 
    int remainder ; 
    int sum = 0 ; 

    while(num!=0){
        sum = sum*10 + num%10; 
        num = num/10 ;
    }

    if(sum==orig_num){
        return true ; 
    }

    return false ; 
}



int main()
{
    number n ; 
    printf("enter the number \n") ; 
    scanf("%d" , &n.num) ; 


    if(palindrome(n.num)){
        printf("PALINDROME") ; 
    }
    else{
        printf("NOT A PALINDROME") ; 
    }




    return 0 ; 
}