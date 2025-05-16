// write a program whih prints its own source code  . 


#include <stdio.h>

int main()
{
    FILE *fr ; 
    char c; 

    fr = fopen(__FILE__ , "r");

    while((c = getc(fr)) != EOF){
        putchar(c);
    }

    fclose(fr);
    return 0 ;
}