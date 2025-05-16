// program to find second highest number in an array 


#include <stdio.h> 

int maximum(int *a , int *len){
    int max = 0 ; 
    for(int i = 0 ; i<*len ; i++ ){
        if(a[i]>max){
            max = a[i] ; 
        }
    }

    return max ; 

}


int second_max(int *a , int length ,int maxi){
    int secmax = 0 ; 
    for(int i = 0 ; i<length ; i++){

        if(a[i]>secmax && a[i]< maxi){
            secmax = a[i] ; 
        }
    }

  return secmax ; 
}


int main()
{
    int arr[] = {1,2,3,5 , 5 , 6,6, 33, 9 ,23} ; 
    int len = sizeof(arr) / sizeof(int) ; 
     // first we will find out the max one out here 

    int m = maximum(arr , &len) ; 
    printf("%d \n" , m) ;

    // now to find second maximum number 


    printf("the second maximum number is %d" , second_max(arr , len  , m) );


    return 0 ;
}