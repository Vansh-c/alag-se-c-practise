#include <stdio.h>

int main()
{
    int input_arr[5];
    printf("enter the elements of given array \n");

    for(int i = 0 ; i<5 ; i++){
        scanf("%d",&input_arr[i]);
    }

    printf("the given array with elements is %d \n\n",input_arr[0]); // just to check 


    int min = input_arr[0] ; 
    for(int i = 0 ; i<5 ; i++){
        if(input_arr[i]<min){
            min = input_arr[i];
        }
    }

    printf("the minimum value of the array of five numbers is %d", min);
    return 0; 
}