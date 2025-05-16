#include <stdio.h>

int *add(int v1[] , int v2[] , int length , int result[]){
   



    for(int i = 0 ; i<length ; i++){
        result[i] = v2[i] +v1[i];
    }

    return result ; 

}


int main()
{

    int v1[] = {1,2,3};
    int v2[] = {3,4,5};
    int result[] = {0,0,0};

    int *r = add(v1 , v2 , 3 , result);

    for(int i = 0 ; i<3 ; i++){
        printf("r[%d] = %d\n" , i , r[i]);
    }
    return 0;
}