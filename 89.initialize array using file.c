// to initialiaze and array using directive  


#include <stdio.h> 


int main()
{
    int array[] = { 
        #include "89.data.txt" 
    };

    int l = sizeof(array) / sizeof(int) ; 

    for(int i = 0 ; i<10; i++){
        printf("a[%d] = %d \n" , i , array[i]) ; 
    }

    return 0 ;
}