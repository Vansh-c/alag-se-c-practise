// count the number of non repeating elements in an array 

#include <stdio.h>


int main()
{
    int arr[] = {1,3,4,1,6,7};
    int count= 0 ;
    int length = sizeof(arr) / sizeof(int) ;

    int i= 0 , j= 0 ;
    
    for(int i = 0 ; i<length ; i++){
     for( j = 0 ; j<length ; j++){
      if(arr[i] == arr[j] && i!=j){
        break;
      }

     }

     if(j==length){
        count++;
     }
    }

    printf("the number of elements are: %d" , count);


    return 0; 
}