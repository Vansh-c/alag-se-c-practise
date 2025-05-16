// program to find second minimum number 


#include <stdio.h> 

int minimum(int *a , int *len);
int second_min(int *a , int min , int len) ; 



int main()
{
    int arr[] = {55 , 3, 55, 33, 9 , 0 , 24} ; 
    int len = sizeof(arr) / sizeof(int) ; 

    int min = minimum(arr, &len) ; 
    printf("the second minimum value is %d" , second_min(arr , min , len));


    return 0 ; 
}


int minimum(int *a , int *len){
    int min = a[0] ; 
    for(int i = 0 ; i<*len ; i++){
        if(a[i]<min){
            min = a[i] ; 
        }
    }

    return min ;
}



int second_min(int *a , int min , int len){
    int secmin = a[len - 1] ; 
    for(int i = 0 ; i<len ; i++){
        if(a[i]>min && secmin>a[i]){
            secmin = a[i] ; 
        }
    }

    return secmin ; 
}