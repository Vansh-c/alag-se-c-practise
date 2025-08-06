#include <stdio.h> 
#include <string.h> 

void swap(int *a , int *b , int size){
    char keep[10] ; 
    memcpy(keep , a , size) ; 
    memcpy(a , b , size) ; 
    memcpy(b,keep , size) ;
}

int main()
{
    int a = 15 ; 
    int b = 6 ; 
    swap(&a , &b , 4) ; 

    printf("a = %d\n" , a) ; 
    printf("b = %d" , b) ;



    return 0 ;
}