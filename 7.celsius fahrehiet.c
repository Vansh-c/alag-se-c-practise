#include <stdio.h>


int main(){
    double C = 0 , F = 0 , start ,  end ,step;

   printf("enter ths start  valuye of c \n");
   scanf("%lf",&start);

   printf("enter the end value of temperature \n");
   scanf("%lf",&end);

   printf("enter the steps you want to skip \n");
   scanf("%lf",&step);

   for(C = start ;  C<end ; C+=step){
    F = C*1.8 + 32;
    printf("%8.2lf  %8.2lf \n",C , F );

   }
   
    return 0;
}