#include <stdio.h>

int main()
{
    int myarr[] = {1,2,3,4,5,6,7,8,9};
    int i ;
    int t;
    for(i = 0 ; i<9/2 ; i++){
         t = myarr[i];
         myarr[i] = myarr[8-i]; 
         myarr[8-i] = t;
    
    }

    for(i=0 ; i<9 ; i++){
        printf("%d",myarr[i]);
    }
    return 0 ;
}