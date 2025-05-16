// using qsort() method to sort an array 

#include <stdio.h> 
#include <stdlib.h> 


int compare(const void *x_void, const void *y_void){
    int x = *(int *)x_void ; 
    int y = *(int *)y_void ; 

    return x-y ; 
}


int main()
{


    int a[]  = {3,2,5,4,1} ; 
    int len = sizeof(a) / sizeof(int) ; 


    qsort(a , len , sizeof(int ) , compare);

    // void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));  // syntax of qsort()



     // output the array to observe whether and how it has been sorted
  for (int i = 0; i < len; i++){
      printf("a[%d] = %d\n", i, a[i]);}


    return 0 ;
}