#include <stdio.h>

int reverse(int *arr , int mid , int length);

int main(){

  int arr[] = {12,2,3,4,5,6};

  int length = sizeof(arr) / sizeof(int) ; 

  int mid = length/2 ;
  int (*rev)(int * , int , int) = &reverse;
  rev(arr , mid , length);

  for(int i = 0 ; i<length ; i++){
    printf("%d " , arr[i]);
  }
  return 0;
}

int reverse(int *arr , int mid , int length){
  for(int i = 0 ; i<mid ; i++){
    int temp = arr[i] ; 
    arr[i] = arr[length - i - 1] ;
    arr[length - i - 1] = temp;
  }
}

