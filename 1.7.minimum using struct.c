#include <stdio.h>


typedef struct{
    int num[5] ; 
} numbers ;

int main()
{
    numbers min ;
    int len = sizeof(min.num)/sizeof(int) ; 
    

    for(int i = 0 ; i<len ; i++){
        printf("a[%d] = ", i) ; 
        scanf("%d" , &min.num[i]) ;  
    }

    printf("\n");


    for(int i = 0 ; i<len ; i++){
        printf("%d " , min.num[i]) ; 
    }

    printf("\n") ; 


    int m = min.num[0] ; 

    for(int i = 0 ; i<len ; i++){
        if(min.num[i]<m){
            m = min.num[i];
        }
    }


    printf("the minimum number among the given numbers is %d" , m) ;

    return 0 ; 
}