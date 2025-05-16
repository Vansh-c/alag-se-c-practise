#include <stdio.h>
#include <stdlib.h>

int *add(int *x , int *y){
    int a2 = sizeof(x);
    int b2 = sizeof(y);
    printf("%d \n",b2);
    int size = a2 + b2;

    int *c = calloc(size , sizeof(int));

    return c;
}

int main()
{
    int a = 4 , b = 7;
    int *mul = add(a,b);
    printf("%d",mul);

    return 0;
}