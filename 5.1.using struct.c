// to average of numbers using struct in c . 
#include <stdio.h> 
#include <stdlib.h>


typedef struct{
    int num; 
} numbers; 



int main()
{
   numbers *n = (numbers *)malloc(5*sizeof(int)) ; 

   for(int i = 0  ; i < 5 ; i++){
    printf("a[%d]=",i) ; 
    scanf("%d", &n[i].num) ; 
   }

int min ; 

    int sum = 0 ; 
    for(int i = 0 ; i<5; i++){
        sum = sum + n[i].num ; 
    }


    printf("the average is %.2f" , (float)sum/5) ; 



    return 0 ;
}