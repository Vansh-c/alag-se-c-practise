// to check whether arrays are disjoint using struct 


#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>

typedef struct{
    int *arr ; 
    int *arr2 ; 
} arrays ; 


bool isdisjoint(int *a , int *a2){
    for(int i = 0 ; i<5 ; i++){
        for(int j = 0 ; j<5 ; j++){
            if(a[i] == a2[j]){
                return false ; 
            }
        }
    }

    return true; 
}

int main(){
  arrays a ; 
  a.arr = (int *)malloc(5*sizeof(int)) ; 
  a.arr2 = (int *)malloc(sizeof(int)) ; 

  printf("enter elements of first array \n");

  for(int i = 0 ; i<5 ; i++){
    scanf("%d", &a.arr[i]) ;
  }

  printf("enter elements of seconds array \n") ; 
  for(int i = 0 ; i<5 ; i++){
    scanf("%d" , &a.arr2[i]) ;
  } 


  if(isdisjoint(a.arr, a.arr2)){
    printf("arrays are disjoint") ; 
  }
  else{
    printf("arrays are not disjoint") ;
  }

    return 0 ;
}