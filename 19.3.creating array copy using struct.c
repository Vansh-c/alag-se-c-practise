// creating array copy using struct 

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

typedef struct{
    int *a ; 
} array ; 


int *copy(int *a,int l){
    int *c = (int *)malloc(5*sizeof(int)) ; 

    for(int i = 0 ; i<l ; i++){
        c[i] = a[i] ; 
    }

    return c ; 
}


int main()
{
    array arr; 
    arr.a = (int *)malloc(5*sizeof(int *)) ; 
     
    int l =5;
    printf("%d \n", l) ;

    for(int i = 0 ; i<l ; i++){
         printf("a[%d]= ", i) ; 
         scanf("%d" , &arr.a[i]) ;
    }

    int *cpy = copy(arr.a , l) ;

    for(int i = 0 ; i<l ; i++){
        printf("%d " , cpy[i]) ;
    }

    return 0;
}