// this is using pointer the most difficult topic in c


#include <stdio.h>
int *findmin(int *arr , int *length){
    int min =arr[0];

    for(int i = 0 ; i<length ; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    int *min2 = &min;    // here min is int value , so first it is converted into a pointer
                         // to avoid error integer makes pointer without a cast, and than this address is returned .
    return min2;
}
int main(){
    int arr[] = {3,4,12,4,1};
    int length = 5;
    int *s = findmin(arr , &length);   // here the vale
    printf("the minimum value is %d",*s);
    
    return 0;
}