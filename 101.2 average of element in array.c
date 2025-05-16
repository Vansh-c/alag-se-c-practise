// to find array of elements in an array using recursion . 


#include <stdio.h> 

int avg(int *s , int n){
   

    if(n-1>=0){
        return *s + avg(s + 1 , n-1) ; 
    }
    else{
        return 0 ; 
    }
}




int main()
{
    int arr[] = {1,2,3,4,5} ; 
    int n = sizeof(arr) / sizeof(int) ; 
    printf("the average = %.2f" , (float)avg(arr , n)/ (float)(n)) ; 

    return 0 ; 
}