// to manually find length of string 


#include <stdio.h>

int main()
{
    char str[] = "Vansh Joshi";
    int len = 0 ;
    int i = 0;

    while(str[i] !='\0'){
        len++;
        i++;
    }


    printf("the length of the string is %d", len);
    return 0;
}