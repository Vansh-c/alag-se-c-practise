#include <stdio.h>
#include <string.h>


int main()
{
    int arr[] = {1,2,3,4,5,6};
    int sum = 0;
    int len = sizeof(arr)/sizeof (arr[0]);

    
    


    for(int i = 0 ; i<len ; i++){
        sum = sum + arr[i];

        if(i == (len - 1)){
            printf("the sum of all numbers in the given array is:%d",sum);
        }

    }
    return 0;
}