#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 


typedef struct{
    double *a  ; 
} arr; 

double deviation(double *a , int l){
    double sum_squares = 0 ; 
    double mean = 0; 
    double sum = 0 ; 
    double dev = 0 ;


    for(int i = 0 ; i<l ; i++){
          sum = sum + a[i] ; 
    }

    mean = sum/l; 

    for(int i = 0 ; i<l ; i++){
        sum_squares = sum_squares + pow((a[i]- mean) , 2) ; 
    }

    dev = sum_squares/l; 

    return sqrt(dev) ;
}



int main()
{

    arr array ; 
    array.a = (double *)malloc(5*sizeof(double)) ;

    printf("enter the elements of array \n") ;

    for(int i = 0 ; i<5 ; i++){
        scanf("%lf" , &array.a[i]) ;
    }

    double val = deviation(array.a , 5) ; 

    printf("the standard deviation is %lf", val) ;
    free(array.a) ;

    return 0 ;
}