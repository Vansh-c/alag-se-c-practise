// program to rotate an array to left 
// ex: {1,2,3,4,5,6}
// after: {2,3,4,5,6,1}


#include <stdio.h>

int rotate_left(int *a1 , int len);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int length = sizeof(arr) / sizeof(int) ;

    for(int i = 0 ; i<length ; i++){
        printf("%d " , arr[i] );
    }

    printf("\n");

    rotate_left(arr , length);

    for(int i = 0 ; i<length ; i++){
        printf("%d " , arr[i] );
    }

    return 0;
}

int rotate_left(int *a1 , int len){
    int temp = a1[0]; 

    for(int i = 0 ; i<len-1; i++){
        a1[i] = a1[i+1];
    }

    a1[len-1]  = temp;
}
