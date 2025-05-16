// to demonstrate the use of linear search methods in c . 


#include <stdio.h>

int linear_search(int *a , int size, int key){
    int pos = 0 ;
    while(pos<size && (a[pos]!=key)){
        pos++;
    }

    if(pos<size){
        return pos ; 
    }

    else{
        return -1 ; 
    }
}

int main()
{
    int x[] = {12 , -3 , 78 , 67, 6 , 50 , 19 , 10} ; 
    printf("%d element is found at %d position" , 6, linear_search(x , 8 , 10));
    return 0 ;
}