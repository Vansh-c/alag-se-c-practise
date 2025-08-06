// to count the non repeating elements in c. 

#include <stdio.h> 
#include <stdlib.h>



typedef struct{
    int *a; 
}  array ; 


int count_nonre(int *a, int l){
    int count = 0 ; 


    for(int i = 0 ; i<l ; i++){
        for(int j = 0 ; j<l ; j++){
            if(a[i] == a[j] && i!=j){
                break; 
            }

            if(j==(l-1)){
                count++ ; 
            }
        }

    }

    return count ; 
}


int main()
{
    array *arr = (array *)malloc(sizeof(array)) ;
    arr->a = (int *)malloc(5*sizeof(int)) ;
    
    
    printf("enter the elements of an array \n") ; 

    for(int i = 0 ; i<5 ; i++){
        scanf("%d" , &arr->a[i]) ;
    }

    int l = 5;  
    printf("number of nin-repeating digits are \n");
    int result  = count_nonre(arr->a , l) ; 

    printf("%d" , result) ;

    return 0 ;
}