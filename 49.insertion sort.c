// in this program we will see about insertion sort . 

#include <stdio.h> 


int main()
{
    int a[]  = {4,3,1,7,2} ; 
    int l = sizeof(a) / sizeof(int) ; 

    for(int i = 1; i<l ; i++){
         int key = a[i] ; 
         int j = i-1 ; 
         while(j>=0 && a[j] > key){
            a[j+1] = a[j] ; 
            j = j-1 ; 
         }
         a[j+1]  = key ;
    }

    for(int i = 0 ; i<l ; i++){
        printf("%d " , a[i]);
    }

    return 0 ;
}