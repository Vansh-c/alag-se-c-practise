// to find min of number usinig another pointer variation 


#include <stdio.h> 

int minimum(int *arr ,int len){
    int min = *arr ; 

    for(int i = 0 ; i<len ; i++){
        if(min > *(arr+ i) ){
            min = *(arr + i) ; 
        }

    }

    return min ; 
}


int main()
{
    int arr[] = {3,4,1,2,5} ; 

    int l = sizeof(arr) / sizeof(int) ; 

    printf("minimum element = %d", minimum(arr , l)) ; 
    return 0 ; 
}