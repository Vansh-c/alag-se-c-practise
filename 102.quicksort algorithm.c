// quicksort algorithm 


#include <stdio.h> 

void swap(int *x , int *y); 
void quicksort(int *arr , int length) ; 
void quicksort_recursion(int *arr , int low , int high) ;
int partition(int *arr , int low , int high) ;  


int main()
{
    int arr[] = {6,3,2,4,9,8,7,5} ; 
    int length = sizeof(arr) / sizeof(int) ; 


    
    quicksort(arr, length);
    
    for (int i = 0; i < length; i++)
      printf("%d ", arr[i]);
    printf("\n");
    
    return 0 ; 
}


void swap(int *x , int *y){
    int t = *x ; 
    *x = *y ; 
    *y = t ;
}


void quicksort(int *arr , int length){
    quicksort_recursion(arr , 0 , length - 1) ; 
}


void quicksort_recursion(int *arr , int low , int high){
    if(low<high){
        int pivot_index = partition(arr , low , high) ; 
        quicksort_recursion(arr , low , pivot_index - 1) ; 
        quicksort_recursion(arr , pivot_index+1 , high) ; 
    }
}


int partition(int *arr , int low , int high){
    //              j
    // 3 1 2 4 6 7 [5]
    //       i

    int pivot_value = arr[high] ; 

    int i = 0 ; 

    for(int j = 0 ; j<high ; j++){
        if(arr[j]<pivot_value){
            swap(&arr[i] , &arr[j]) ; 
            i++ ; 
        }

    }

    swap(&arr[i] , &arr[high]) ; 

    return  i ; 
}