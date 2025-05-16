#include <stdio.h>


int main(){
    int arr[] = {1,2,3,3,3,45,5};

    int count = 0;
    int find_value = 3;

    for(int i = 0 ; i<5 ; i++){
        if(arr[i] == 3){
            count++;
        }
    }

    printf("the value %d in the array is repeated %d times",find_value , count);

    return 0 ;
}

