// bubble sort done using struct 


#include <stdio.h> 
#include <stdlib.h> 

typedef struct{
    int *a ; 
} array ; 


int main()
{
    array *arr = (array *)malloc(sizeof(array)) ; 
    (*arr).a = (int *)malloc(6*sizeof(int)) ;
    printf("enter the elements \n");

    for(int i = 0 ; i<6 ; i++){
        scanf("%d" , &arr->a[i]);
    }

    for(int i =0  ; i<6; i++){
        for(int j = 0 ; j<5;  j++){
            if(arr->a[j]>arr->a[j+1]){
                int tmp = arr->a[j] ; 
                arr->a[j] = arr->a[j+1]  ;
                arr->a[j+1] = tmp ; 
            }
        }
    }


    printf("the array after sorted is \n") ; 
    

    for(int i = 0 ; i<6 ; i++){
        printf("%d " , arr->a[i]) ;
    }
    



    return 0 ;
}