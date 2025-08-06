// dot product using struct 

#include <stdio.h> 
#include <stdlib.h> 

typedef struct{
    int *a ; 
} vector ; 

vector create_vector(int l){
    vector v ; 
    v.a = (int *)malloc(l*sizeof(int));
}


int *dot_product(int *a , int *b , int l){
         int *c = (int *)malloc(l*sizeof(int)) ; 


         for(int i = 0 ; i<l ; i++){
            c[i] = a[i]*b[i] ; 
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
    
    printf("\n");

        for(int i = 0 ; i<3 ; i++){
        printf("v1[%d] = ", i) ; 
        scanf("%d" , &vtr2.a[i]) ; 
    }


    printf("\n") ; 

    int *result = dot_product(vtr.a , vtr2.a , 3) ; 


    for(int i = 0 ; i<3 ; i++){
        printf("%d " , result[i]);
    }


    return 0 ;
}