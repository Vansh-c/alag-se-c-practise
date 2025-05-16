#include <stdio.h>

int main()
{
    int arr[] = {5,4,3,2,1};

    for(int i = 0 ; i<5 ; i++){

        for(int k = 0 ; k<5 ; k++){
            printf("%d",arr[k]);
        }

        for(int j = 0 ; j<=i ; j++){
          
            arr[4-i] = 5;
        }

        printf("\n");
    }

    printf("\n");

    int a[] = {1,2,3,4,5};

    for(int i = 0 ; i<5 ; i++){
        for(int k = 0 ; k<5 ; k++){
            printf("%d" , a[k]);
        }

        for(int j = 0 ; j<=i ; j++ ){
            a[i] = 1; 
        }

        printf("\n");
    }


    return 0;
}