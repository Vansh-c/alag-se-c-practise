#include <stdio.h>

int *reverse(int *arr , int mid , int length);

int main(){

  int arr[7] ;

  for(int i = 0 ; i<7; i++){
    printf("arr[%d] =",i);
    scanf("%d", &arr[i]);
  }

  printf("befoe reverse: \n");

  for(int i = 0 ; i<7 ; i++){
    printf("%d " , arr[i]);
  }

  printf("\n");

  int length = sizeof(arr) / sizeof(int) ; 

  int mid = length/2 ;
  int *rev = reverse(arr , mid , length);


  printf("after reversing \n");


  for(int i = 0 ; i<length ; i++){
    printf("%d " , arr[i]);
  }
  return 0;
}

int *reverse(int *arr , int mid , int length){
  for(int i = 0 ; i<mid ; i++){
    int temp = arr[i] ; 
    arr[i] = arr[length - i - 1] ;
    arr[length - i - 1] = temp;
  }
}

