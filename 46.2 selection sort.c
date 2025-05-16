// to see about selection sort  


#include <stdio.h> 

int min_loc(int x[] , int k , int size){
    int j , pos ; 
    pos = k ; 

    for(j = k+1 ; j<size ; j++){
        if(x[j]<x[pos]){
            pos = j ;
        }
    }

    return pos ;
}

int selsort(int x[] , int size){
    int k , m , temp;
    for(k = 0 ; k<size-1 ; k++){
        m = min_loc(x , k , size);
        temp = x[k] ; 
        x[k] = x[m] ; 
        x[m] = temp ; 
    }
}

int main()
{

    int a[] = {5,12 , -5 , 6 , 14 , 31 , -17 , 46} ; 

    selsort(a , 8 ) ; 
    for(int i = 0 ; i<8 ; i++){
        printf("%d " , a[i]);
    }

    return 0 ; 
}