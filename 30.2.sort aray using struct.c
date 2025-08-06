// sort an array using struct 
#include <stdio.h> 
#include <stdlib.h>

typedef struct{
    int *arr ; 
} array ; 


int main()
{
    array *a = (array *)malloc(sizeof(array))  ; // this is blueprint of our home 
    (*a).arr = (int *)malloc(5*sizeof(int)) ; 
    printf("%d \n" , sizeof(a->arr));

    printf("enter the elements of array \n") ; 
     for(int i = 0 ; i<10 ; i++){
    scanf("%d" , &a->arr[i]) ;
   } ; 

    for(int i = 0 ; i<10 ; i++){
        for(int j = i+1 ; j<10 ; j++){
            if((*a).arr[i]< a->arr[j]){
                int t = a->arr[i]  ; 
                a->arr[i] = a->arr[j] ; 
                (*a).arr[j] = t ; 
            }
        }
    }

   for(int i = 0 ; i<10 ; i++){
    printf("%d " , a->arr[i]) ;
   }

    return 0 ;
}