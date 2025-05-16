#include <stdio.h>

int ncr(int n , int r);
int factorial(int n) ; 

int(*nu)(int ,int ) = &ncr ; 
int(*p)(int)  = &factorial ; 


int main()
{
  printf("enter values of m and n \n") ; 
  int m , n ;
   scanf("%d" , &m) ; 
   scanf("%d" , &n);
   
   int sum = 0;
   for(int i = 0 ; i<=m  ; i++){
    sum = sum + nu(n , i ) ; 
   }


   printf("the sum is %d" , sum);
  return 0 ; 
}

int ncr(int n , int r){
  return   (factorial(n) / factorial(r) / factorial(n-r));
}



int factorial(int n){
  int  temp = 1;
  for(int i = 1; i<=n ; i++){
     temp = temp*i;
  }


  return temp;
}