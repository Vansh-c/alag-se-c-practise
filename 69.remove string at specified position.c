// program to remove a string at specified position  . 

#include <stdio.h> 
#include <string.h>


char rem(char *s , int pos){
    int len = strlen(s);
    for(int i = 0 ; i<len ; i++){
        if(i == pos){
            s[i] = ' ';
        }
    }

    printf("%s" , s) ;
}



int main()
{

    char s[] = "this is string" ; 
    printf("enter position to remove \n") ;
    int pos ; 
    scanf("%d" , &pos) ;

    rem(s , pos);

    return 0 ;
}