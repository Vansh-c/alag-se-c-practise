// second version of finding maximum number 


#include <stdio.h> 

int second_max(int *a , int len){

    int max1 , max2 ; 
    if(a[0]>a[1]){
        max1 = a[0] ; 
        max2 = a[1] ; 
    }
    else{
        max1 = a[1] ; 
        max2 = a[0] ; 
    }


    for(int i = 0 ; i<len ; i++){


      if(a[i]>max1){
        max2 = max1 ; 
        max1 = a[i];
      }

      if(max2<a[i] && max1>a[i]){
        max2 = a[i];
      }
    }

 

    return max2 ;
}



int main()
{
    int arr[] = {1,2,3,4,5} ; 
    int len = sizeof(arr) / sizeof(int) ; 

    printf("the second maximum number is %d" , second_max(arr , len)) ; 
    return 0 ; 
}