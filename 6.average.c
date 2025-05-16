#include <stdio.h>

int main(){
    
    int arr[4];
    for(int i = 0 ; i<4 ; i++){
        scanf("%d",&arr[i]);
    }

    int len = sizeof(arr)/sizeof (arr[0]);
    int sum = 0;

    for(int i = 0 ; i<len  ; i++){
        sum = sum + arr[i];

        if(i==(len-1)){
            float sum1= sum;
            float len1 = len;

            printf("the average is %f",sum1/len1);
        }

    }

    return 0;
}