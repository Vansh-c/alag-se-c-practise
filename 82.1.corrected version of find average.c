#include <stdio.h> 
#include <stdlib.h>

int main()
{
    FILE *f ; 
    f = fopen("82.num.dat" , "r") ;
    double sum =0; 
    double total_length = 0; 
    double nex_number; 
    int number_of_members = 0 ; 

    while(!feof(f)){
        fscanf(f , "%lf" , &nex_number); 
        sum = sum + nex_number ; 
        total_length++ ; 


    }
  

    printf("%lf" , total_length) ;
    printf("\nthe average is %lf", sum/total_length) ;


    return 0 ;
}