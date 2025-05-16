#include <stdio.h> 
#include <stdlib.h>

int  *dot_product(int *v1 , int *v2 ){
    int len1 = sizeof(v1)/sizeof(int) ; 
    int len2 = sizeof(v2) / sizeof(int) ; 

    int total_size = len1 + len2 ; 
    int *v3 = calloc(total_size , sizeof(int)); 

    for(int i = 0 ; i<3 ; i++){
        v3[i] = v1[i]*v2[i];
    }

    return v3;
}

int main()
{
    int v1[] = {1,2,3};
    int v2[] = {4,5,6};

    int *d_product = dot_product(v1 , v2) ; 
    for(int i = 0 ; i<3 ; i++){
        printf("d_product[%d] = %d \n" , i , d_product[i]);
    }
    return 0 ;
}