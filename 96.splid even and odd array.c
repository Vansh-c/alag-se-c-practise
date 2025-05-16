// split even and odd numbers in an array into 2 arrays 


#include <stdio.h> 
#include <stdlib.h>

int split_nums(int *a , int len , int **odd , int **even , int *odd_length ,int *even_length);



int main()
{
    int arr[] = {1,2,3,4,5,6,7,8} ; 
    int len = sizeof(arr) / sizeof(int) ;
    int *even = NULL; 
    int *odd = NULL ; 
    int odd_length = 0 ; 
    int even_length = 0 ;
    
    split_nums(arr , len , &odd , &even , &odd_length, &even_length);
    
    for(int i = 0 ; i<4 ; i++){
        printf("%d ", even[i]);
    }

    printf("\n") ; 

    for(int i = 0 ; i<4 ; i++){
        printf("%d ", odd[i]);
    }


   
    return 0 ; 
}


int split_nums(int *a , int len , int **odd , int **even , int *odd_length ,int *even_length){
    *odd_length = 0 ;
    *even_length =  0 ;
    for(int i = 0 ; i<len ; i++){
        if(i%2==0){
            *even_length  = *even_length + 1 ;
        }
        else{
            *odd_length  = *odd_length + 1 ;
        }
    }

    *odd = malloc(*odd_length*sizeof(int)) ; 
    *even = malloc(*even_length*sizeof(int)) ; 

    int array_count = 0 , even_count = 0 , odd_count = 0 ; 

    while (array_count < len)
    {
      if (a[array_count] % 2 == 1)
      {
        // odd is a pointer to a pointer (an array), and so we dereference the 
        // pointer *first* before we access the array itself with array syntax
        (*odd)[odd_count] = a[array_count];
        odd_count++;
      }
      else
      {
        // we do the same as above, but this time with even
        (*even)[even_count] = a[array_count];
        even_count++;
      }
      array_count++;
    }
}