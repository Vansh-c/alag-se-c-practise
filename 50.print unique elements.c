// here we will write a program to pring unique elements 

#include <stdio.h> 
#include <stdbool.h>

int unique_elements(int *a , int len);


int main()
{
    int a[] = {1,2,3,4,5,6,3,4,1,8,9,7,8} ; 
    int lenght = sizeof(a) / sizeof(int) ; 


   unique_elements(a , lenght) ;

    return 0 ;
}


int unique_elements(int *a , int len){
    
    
    for(int i = 0 ; i<len ; i++){
        bool match_found = false ; 
        for(int j = 0 ; j<i ; j++){

            if(a[i] == a[j] && i!=j){
               match_found = true; 
            }
         
        }

        if(match_found== false){
            printf("%d ", a[i]);
        }
    }


    
}
