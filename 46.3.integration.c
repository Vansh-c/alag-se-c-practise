// this is by using newton method 

#include <stdio.h> 

float f(float x){
  return x*x ; 
}

int main()
{

  int n = 10 ; 
  float a = 0, b = 3, integral ; 
  float sum = 0 ; 
  float h ;
  float x ; 
  if(b>a){
    h = (b-a)/n; 
  }
  else{
    h = (a-b)/n  ;
  }

  for(int i = 0 ;  i<n ; i++){
   x = a + i*h ; 
   sum = sum + f(x) ; 
  }

  integral = (h/2)*(f(a) + f(b) + 2*sum) ;
  printf("%f" , integral) ; 
  return 0 ;
}