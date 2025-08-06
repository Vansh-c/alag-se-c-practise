#include <stdio.h> 
#include <string.h>

int replace(char *s , char *w , char *new){
    for(int i = 0 ; i<strlen(s) ; i++){
        if(s[i] == *w){
            s[i] = *new; 
        }
    }
}

int main()
{

    char s[] = "this is a simple sentence " ; 
    char letter = 'i' ; 
    char rep = 'a' ; 
    replace(s , &letter , &rep) ; 
    puts(s) ;

    return 0 ; 
}