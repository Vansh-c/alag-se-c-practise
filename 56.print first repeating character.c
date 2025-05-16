// to print first repeating charater 

#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int unique(char *s ){
    int len = strlen(s) ; 
    
    for(int i = 0 ; i<len ; i++){
        bool repeat = true ; ;  
        for(int j = 0 ; j<len ; j++){
            if(s[i] == s[j] && i!=j){
                repeat = false ; 
                break ;
            }
        }

        if(!repeat){
            printf("%c" , s[i]);
            break;
        }
    }
}


int main()
{

    char s[] = "hkaias" ;
    unique(s);
    return 0 ;
}