#include <stdio.h>

int vector_add(int v1[] , int v2[] ,int result[] , int length){

    for(int i = 0 ; i<length ; i++){
        result[i] = v1[i] + v2[i];
    }

    for(int i = 0 ; i<length ; i++){
          printf("%d ",result[i]);
    }

}

int main()
{
    int v1[3] = {1,2,3};
    int v2[3] = {3,4,5};
    int result[3] = {0,0,0};

    int length = sizeof(v1)/sizeof(int) ; 

    vector_add(v1 , v2 , result , length);

    return 0;
}