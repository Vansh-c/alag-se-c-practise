#include <stdio.h>
  

int main()

{
    printf("enter the amount of array \n");
    int arr[4];
    int i;
    int count = 0;

    for(i = 0 ; i<4 ; i++){
         scanf("%d",&arr[i]);
         }


    for (i = 0 ; i<4/2 ; i++){
        count = arr[i];
        arr[i] = arr[3-i];
        arr[3-i] = count;
    }

    for(i =0 ; i<4 ; i++){
        printf("%d",arr[i]);
    }

    return 0 ;
}