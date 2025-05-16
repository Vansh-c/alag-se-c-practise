#include <stdio.h>

int occurences(int arr[] , int length , int num){
    int count = 0 ;
    for(int i = 0 ; i<length ; i++){
        if(arr[i] == num){
            count++ ; 
        }

    }
    printf("the ammount of occurences of %d value in the given array is %d \n",num,count);
}

int main()
{
    int myarray[] = {1,2,3,4,5,1,1};
    occurences(myarray ,7 , 1 );

    return 0 ;
}