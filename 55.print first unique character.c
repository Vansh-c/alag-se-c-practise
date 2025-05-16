// write a program to print first unique character in a string . 

#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int unique(char *s){
    int i = 0 ; 
    bool fd = true; 
    int len = strlen(s) ; 
    while(i<len){
        fd = true ; 
        for(int j = 0 ; j<len ; j++){
            if(s[i] == s[j] && i!=j){
                 fd = false ; 
                 break ; 
            }
        }
        if(fd == true){
            printf("%c" , s[i]);
            break;
        }
        i++ ;
    

    }

}
int main()
{
    char s[] = "vanav" ; 
    unique(s) ;
    return 0 ;
}