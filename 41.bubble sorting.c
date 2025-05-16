// let's learn about bubble sorting 
//  simplest sorting method which takes the words by repeatedlt swapping the adjacent elements if they are in wrong order 




#include <stdio.h>


int main()
{
    int arr[] = {7,4,5,1,4,8,3,9};

    int size = sizeof(arr) / sizeof(int);

    for(int i = 0 ; i<size ; i++){
          for(int j = 0 ; j<size ; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
                
          }
    }



    for (int i = 0 ; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0 ;
}