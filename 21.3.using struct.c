// using to struct to do the same 

#include <stdio.h> 
#include <stdlib.h>


typedef struct{
    int space ; 
  int *a ; 
}vector;


vector create_vector(int num){
    vector v ; 
    v.space = num ; 
    v.a = (int *)malloc(num*sizeof(int)) ; 

    return v ; 
}


int *make_vector(int *a , int *b , int l){
    int *c = (int *)malloc(sizeof(int)*l) ; 

    for(int i = 0 ; i<l ; i++){
        c[i] = a[i] + b[i] ; 
    }


    return c ; 
}


int main()
{
    vector vtr  = create_vector(3) ; 
    vector vtr2 = create_vector(3) ; 

    for(int i = 0 ; i<3 ; i++){
        printf("v1[%d] = ", i) ; 
        scanf("%d" , &vtr.a[i]) ; 
    }


    printf("\n") ; 

        for(int i = 0 ; i<3 ; i++){
        printf("v2[%d] = ", i) ; 
        scanf("%d" , &vtr2.a[i]) ; 
    }
    printf("\n");

    int *result  = make_vector(vtr.a , vtr2.a , 3) ; 

    for(int i = 0 ; i<3 ; i++){
        printf("%d " , result[i]) ;
    }

    return 0 ; 
}