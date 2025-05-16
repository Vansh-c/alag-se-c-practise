// another version to find second number 



#include <stdio.h> 


int second_min(int *a , int len){
    int min1 , min2 ; 

    if(a[0]<a[1]){
         min1 = a[0] ;
         min2 = a[1] ; 
    }
    else{
         min1 = a[1] ; 
         min2 = a[0] ; 
    }

    // after we have sorted first two numbers now 


    for(int i = 2  ; i <len ; i++){

        if(min1>a[i]){
            min1 = a[i] ; 
        }


        if(min1<a[i] && min2>a[i]){
            min2 = a[i] ; 
        }
    }

    return min2 ; 
}


int main()
{
    int arr[] = {1,4,5,2,6} ; 
    int len = sizeof(arr) / sizeof(int) ; 
    printf("the second min number is %d" , second_min(arr , len ));
    return 0 ; 
}