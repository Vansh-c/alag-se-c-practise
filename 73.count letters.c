// to count letters in a given string 


#include <stdio.h> 
#include <string.h> 
#include <ctype.h>


int count_letters(char *s){
    int len = strlen(s) ; 
    int count = 0 ;

    for(int i = 0 ; i<len ; i++){
        if(isalpha(s[i])){
            count++  ;
        }
    }


    return count ; 

}



int main()
{
    char str[] = "This is a 33 string" ; 
    printf("the no. of letters in a given string are %d" , count_letters(str));

    return 0 ; 
}