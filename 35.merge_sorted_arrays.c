// to merge two sorted arrays 

#include <stdio.h>

int merge(int *arr1 , int *arr2 , int len1 , int len2, int *r);

int main(){
    int arr1[] = {1,2,4};
    int arr2[] = {1,3,4};
    int len1 = sizeof(arr1) / sizeof(int) ; 
    int len2 = sizeof(arr2) / sizeof(int);
    int r[10]; 
    merge(arr1 , arr2 , len1 , len2 , r);

    for(int i = 0 ; i<10 ; i++){
        printf("%d " , r[i]);
    }

    return 0;
}



int merge(int *arr1 , int *arr2 , int len1 , int len2, int *r){
  int i = 0 ;
  int j = 0 ;
  int k = 0 ;
    while(i<len1 && j<len2){
        if(arr1[i] < arr2[j] ){
            r[k] =  arr1[i];
            i++; 
            k++;
        }

        else{
            r[k] = arr2[j];
            j++;
            k++;
        }

       
    }
     printf("%d %d  %d\n" , i , j , k);
    while(i<len1){
        r[k] = arr1[i];
        i++ ; 
        k++ ;
    }


    while(j<len2){
        r[k] = arr2[i];
        j++ ; 
        k++;
    }

}
