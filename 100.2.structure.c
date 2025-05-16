// program to add two feet and inches 


#include <stdio.h> 

typedef struct{
    int inch ; 
    int feet ; 
} add ; 


int main()
{
    add d1 , d2 , sum ; 

    scanf("%d" , &d1.inch) ; 
    scanf("%d" , &d1.feet) ; 

    scanf("%d" , &d2.inch) ; 
    scanf("%d" , &d2.feet) ;  

    sum.inch = d1.inch + d2.inch ;
    sum.feet = d1.feet + d2.feet ; 
    printf("\n\n");

    if(sum.inch>=12){
        sum.feet+= sum.inch/12 ;
        sum.inch =sum.inch%12; 
    }

    printf("sum of distance = %d %d" , sum.feet , sum.inch) ; 

    return 0 ; 
}