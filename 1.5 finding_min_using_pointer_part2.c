#include <stdio.h>
// this is using pointer in c part 2 

int findmin(int *arr ,int length){
      int min = arr[0];
       for(int i = 0 ; i<length ; i++){
        if(arr[i]<min){
            min = arr[i];
        }
       }

       return min;
}


int findmax(int *arr ,int length){
    int max = arr[0];
     for(int i = 0 ; i<length ; i++){
      if(arr[i]>max){
          max = arr[i];
      }
     }

     return max;
}


int (*select_option())(int *, int){
    printf("select 1 to find min and 2 to find max \n");
    int option;
    scanf("%d" , &option);

    if(option == 1){
        return findmin;
    }

    else if(option == 2){
        return findmax;
    }

    else{
        printf("no option choosen !!");
        return NULL;
    }


}



int main()
{
    int arr[] = {2,3,4,7,8};
    int length = sizeof(arr)/ sizeof(int);
    
    int (*choose_operation)(int * , int) = select_option();

    if(choose_operation == findmax){
       printf("the max value is %d", choose_operation(arr , length));
       
       }
    else if(choose_operation == findmin){
       printf("the min value is %d", choose_operation(arr , length));
       }

    return 0 ;
}