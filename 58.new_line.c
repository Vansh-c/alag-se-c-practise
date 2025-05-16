// to print new line charactesrs 

#include <stdio.h> 
int newline(char *s);

int main()
{
    char s[] = "this is \n sytrin"; 
    newline(s) ;
    return 0;
}

int newline(char *s){
    int i = 0 ;
    while(s[i]!= '\n' && s[i]!='\0'){
        printf("%c", s[i]);
        i++ ; 
    }
}