// to check whether two arrays are disjoint or not 

#include <stdio.h>
#include <stdbool.h>

bool isdisjoint(int *a1 , int *a2 , int len1 , int len2){

    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
        if(a1[i] == a2[j]){
            return false;
        }
    }
    }
    return true;
}

int main()
{
    int arr1[5];
    int arr2[5] ;
    printf("enter array 1: \n");
    for(int i = 0 ; i<5 ; i++){
        printf("arr1[%d]:", i);
        scanf("%d" , &arr1[i]);
    }
    
    printf("\n");
    printf("enter array 2: \n");

    for(int i = 0 ; i<5 ; i++){
        printf("arr1[%d] :", i);
        scanf("%d" , &arr2[i]);
    }


    int len1 = sizeof(arr1) / sizeof(int) ; 
    int len2 = sizeof(arr2) / sizeof(int) ;
    

    if(isdisjoint(arr1 , arr2 , len1 , len2)){
        printf("both arrays are disjoint");
    }
    else{
        printf("the entered arrays are not disjoint");
    }
    return 0;
}