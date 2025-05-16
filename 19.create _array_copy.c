//create a copy of an array 

#include <stdio.h>

int main()
{
    int a[5] = {1,2,33,44,55};
    int copy[5];
    
    for(int i = 0 ; i<5 ; i++){
        copy[i] = a[i];
    }

    for(int i = 0 ; i<5  ; i++){
        printf("copy[%d] = %d \n", i , copy[i]);
    }
    return 0;
}