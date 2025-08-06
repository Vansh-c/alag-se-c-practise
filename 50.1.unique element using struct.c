#include <stdio.h> 
#include <stdbool.h>
#include <stdlib.h>

typedef struct{
    int *a ; 
} arr; 


void print_unique(int *a , int l){
      bool unique ;
      int count; 

      for(int i =0 ; i<l ; i++){
        unique = true; 
        count = 0 ; 
        for(int j = 0; j<l ; j++){
            if(a[i] == a[j] && i!=j){
                count++ ; 
            }
        }

        if(count>0){
            unique = false ; 
        }

        if(unique){
            printf("%d " , a[i]) ;
        }
      }


}



int main()
{
    arr array ; 
    array.a = (int *)malloc(7*sizeof(int)) ;

    printf("enter the elements \n") ; 
    for(int i = 0 ; i<7 ; i++){
        scanf("%d" , &array.a[i]) ; 
    }

    print_unique(array.a,7) ;

    free(array.a) ;


    return 0;
}