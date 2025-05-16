#include <stdio.h>



int main()
{
   short num[3][2] = {2, 5, 11, 17 ,23,28} ; 
   printf("%d %d" , *(num+2)[0] , **(num+2));   
   return 0 ;
}


