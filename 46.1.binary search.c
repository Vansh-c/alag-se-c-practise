// to see how binary search works 
// binary search works if the given array is sorted . 
// binary search is faster  than linear search  . 

#include <stdio.h>

int binary_search(int *a ,int size , int key){
    int L , R , mid ;
    L = 0 , R =size ;

    while(L+1!= R){
        mid = (L+R)/2 ; 
        if(a[mid]>key){
            R = mid ;
        }

        else{
            L = mid ; 
        }
    }

    if(L>=0 && a[L] == key){
        return L ;
    }

    else{
        return -1 ; 
    }
}

int main()
{
    int x[] = {-7,-5 ,3,6,12,21,43,65,89 };
    printf("%d is located at %d position " , 6 , binary_search(x , 9 , 6));

    return 0 ;
}