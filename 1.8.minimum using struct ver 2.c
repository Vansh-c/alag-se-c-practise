#include <stdio.h> 
#include <stdlib.h>

typedef struct{
    int *num ; 
} minimum ; 


int reverse(int *a , int l){
    int min  = a[0] ;
    for(int i = 0 ; i<l ; i++){
         if(a[i] < min){
            min = a[i] ; 
         }
    }

    return min ; 
}


int main()
{

    minimum *min = (minimum *)malloc(sizeof(minimum)) ;   // if above typedef struct is a blueprint , than minimu *min is a house .
    // if you only write min , it will crash than . 
    (*min).num= (int *)malloc(5*sizeof(int)) ;    // from the struct pointed to the min , access num member. and give it some space 


    for(int i = 0 ; i<5 ; i++){
        printf("a[%d] = " , i) ; 
        scanf("%d" , &(*min).num[i]) ;
    }

    for(int i = 0 ; i<5 ; i++){
        printf("%d " , (*min).num[i]) ; 
    }

    printf("\n");

    int m = reverse((*min).num , 5) ; 

    printf("the minimun number is %d", m ) ; 


    return 0 ;
}