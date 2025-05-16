#include <stdio.h>

int main()
{
    char b[] = "xyz";
    char *ptr = b;
    printf("%p \n", ptr);
    printf("%p \n", &b);

    char *a = ptr;
    printf("%p \n",&ptr);

    int arr[] = {1,2,3};
    int *ptra = arr;
    printf("%d \n", ptra);
    printf("%d \n", &arr[0]);
    printf("%d \n", *(&arr[0]));

    printf("%d \n", &arr[1]);
    printf("%d \n", *(&arr[1]));





    return 0;
}