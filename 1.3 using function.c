

#include <stdio.h>

int find_min(int arr[], int length){
    int min ;
    min = arr[0];
    for(int i = 0 ; i<length ; i++){
        if(min>arr[i]){
            min = arr[i];
        }
        else{
            continue; 
        }
    }

    printf("the minimyum value is %d \n",min);


}


int main()
{
    int myarray1[5] = {2,3,4,5,6};
    int myarray2[3] = {1,2,0};

    find_min(myarray1 , 5);
    find_min(myarray2 , 3);
    


    return 0 ;
}