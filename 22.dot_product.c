#include <stdio.h>

int dot_product(int v1[] , int v2[] , int result[],int len){
    
for(int i = 0 ; i<len ; i++){
    result[i] = v1[i]*v2[i];
}
}

int main()
{
    int v1[] = {2,3,4};
    int v2[] = {5,6,4};
    int result[3];

    int len = sizeof(v1)/ sizeof(int);

    dot_product(v1, v2 ,result , len);

    for(int i = 0 ; i<3 ; i++){
        printf("result[%d]= %d \n",i, result[i]);
    }

    return 0;
}