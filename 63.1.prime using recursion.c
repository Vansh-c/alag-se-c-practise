#include <stdio.h> 

struct var{
    int num;  
};

void isPrime(int a , int div){
      if(a%div!=0 && div!=2){
        isPrime(a , div-1) ; 
      }
      else if (div==2)
      {
        printf("prime number") ;
      }
      
      else{
        printf("Not a prime number");
      }
     
}

int main()
{
    struct var v ; 
    v.num ; 
    printf("enter the value of variable \n") ; 
    scanf("%d" , &v.num) ;
    int div = v.num-1 ; 
    isPrime(v.num , div) ;


    return 0 ;
}