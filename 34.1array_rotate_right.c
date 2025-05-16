// here array is to be rotated towards right 
// ex: {1,2,3,4,5,6}
// after: {6,1,2,3,4,5}

#include <stdio.h>

int rotate_Index(int *arr , int lenght ,  int n);
 
int rotate_right(int *a, int length);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int len = sizeof(arr) / sizeof(int) ;

    for(int i = 0 ; i<len ; i++){
        printf("%d " , arr[i]);
    }


    rotate_Index(arr , len , 2);


     printf("\n");
    for(int i = 0 ; i<len ; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}

int rotate_Index(int *arr , int lenght ,  int n){
       for(int i = 0 ; i<n ; i++){
        rotate_right(arr , lenght);
       }
}


int rotate_right(int *a, int length){
   int temp = a[length -1];
   
   for(int i = length-2 ; i>=0; i--){
     a[i+1] = a[i];
    }

    
    a[0] = temp;
}