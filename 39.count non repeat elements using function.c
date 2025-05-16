// question vahi andaaz nahi 

int non_repeating(int *arr , int length);

#include <stdio.h>

int main(){

    int arr[] = {2,3,4,1,2,5,6};

    int len  = sizeof(arr) / sizeof(int);

    printf("the no. of non-repeating elements are: %d"  , non_repeating(arr , len));
    return 0 ;
}


int non_repeating(int  *arr , int length){
    int count = 0 ;

    int i = 0 ,j = 0 ;

    for(i = 0 ; i<length; i++){
        for(j = 0 ; j<length; j++){
            if(arr[i] == arr[j] && i!=j){
                break;
            }
        }

        if(j==length){
            count++;
        }
    }

    return count ; 

}