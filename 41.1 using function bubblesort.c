#include <stdio.h>


int bubblesort(int *a , int length){
   for(int i = 0 ; i<length-1 ; i++){
    for(int j = 0; j< length-1 ; j++){
        if(a[j] > a[j+1]){
            int temp = a[j];
            a[j] = a[j+1] ;
            a[j+1] = temp;
        }
    }
   }

}


int main()
{
    int a[] = {7,4,1,2,3,9,6};
    int size = sizeof(a) / sizeof(int) ;

    bubblesort(a  , size);
    
    for(int i = 0 ; i<size ; i++){
        printf("%d "  , a[i]);
    }

    
    return 0;
}