// write a program to compute standard deviation . 

#include <stdio.h> 
#include <math.h>
double stdev(double *a , int N) ; 



int main()
{

    double a[] = {2.3 , 6,5 , 7.8, 2.0} ; 
    int N = sizeof(a) / sizeof(double) ; 
    
    
    printf("the std deviation is %lf: " , stdev(a, N));
    return 0 ;
}

double stdev(double *a , int N){
    double mean = 0 ;
    double total = 0  ; 
    for(int i = 0 ; i<N ; i++){
        total = total + a[i] ; 
    }

     mean = total/N ;
    
    double sum = 0  ; 
    for(int i = 0  ; i<N ; i++){
        sum = sum + pow((a[i] - mean) , 2) ; 

    }


    float  deviation = sum/N ; 

    return sqrt(deviation);
}
