// move all zeros in array to the end .

#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int move(int *a ,int len); 

int main()
{
    int a[] = {2,0,5,6,0,0,7,0,4,7} ; 
    int len = sizeof(a) / 4 ; 
    move(a , len)  ; 

    for(int i = 0 ; i<len ; i++){
        printf("a[%d] = %d \n" , i , a[i]) ; 
    }
}


int move(int *a , int len){
    int count = 0 ; 

    for(int i = 0 ; i<len ; i++){
       if(a[i]!=0){
        a[count] = a[i];
        count++ ; 
       }
    }

    for(int i =  count ; i<len ; i++){
        a[i] = 0 ;
    }
    
}