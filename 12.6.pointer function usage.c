#include <stdio.h>
#include <stdlib.h>


int *new_arr(int a , int b){
    int *c = malloc(sizeof(int)) ; 

     *c = a + b ; 

    return c ; 
}



int main(){
    printf("%d" , *new_arr(7,8)) ;
    return 0 ;
}