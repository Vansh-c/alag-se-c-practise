// program to return multiple dynamically allocated arrays 


#include <stdio.h> 
#include <stdlib.h> 

int *create_dynamic(int length);
int return_two(int *x , int *y);

int allocated_two(int **arr1, int **arr2 , int length) ;    // **arr1 means arr1 is pointer to pointer , *x means x is pointer to int .  


int main()
{
    //  how to return an array
    int *array= create_dynamic(3) ; 

    for (int i = 0; i < 3; i++)
    printf("array[%d] = %d\n", i, array[i]);

    // to return two values 
    int x = 5 , y = 9 ;
    return_two(&x , &y) ; 
    printf("x = %d , y = %d \n" , x , y) ;  

    // now returning two array , 
    printf("\n\n");

    int *arr1 , *arr2 ; 
    allocated_two(&arr1 , &arr2 , 3) ; 

    for (int i = 0; i < 3; i++)
    printf("arr1[%d] = %d\n", i, arr1[i]);

    printf("\n") ; 

    for (int i = 0; i < 3; i++)
    printf("arr2[%d] = %d\n", i, arr2[i]);

    return 0 ; 
}

int *create_dynamic(int length){

    int *a = malloc(length*sizeof(int)) ; 

    for(int i = 0 ; i<length ; i++){
        a[i] = i ; 
    }

    return a  ; 
}



int return_two(int *x , int *y){
    *x = 66 ; 
    *y = 101 ; 
}


int allocated_two(int **arr1, int **arr2 , int length){
    *arr1 = malloc(length*sizeof(int)) ;    // dereferenced arr1 and arr2 
    *arr2 = malloc(length*sizeof(int)) ; 


    for(int i = 0 ; i<length ; i++){
        (*arr1)[i] = i ; 
        (*arr2)[i] = length - i ; 
    }

}


