// program to digits 




#include <stdio.h> 
#include <string.h> 
#include <ctype.h>


int digits(char *s){
    int len = strlen(s) ; 
    int count = 0 ;

    for(int i = 0 ; i<len ; i++){
        if(isdigit(s[i])){
            count++  ;
        }
    }


    return count ; 

}



int main()
{
    char str[] = "This is a 33 string" ; 
    printf("the no. of digits in a given string are %d" , digits(str));

    return 0 ; 
}