// to see whether the string starts with another string 

#include <stdio.h> 
#include <string.h> 
#include <stdbool.h>

int compare(char *s , char *s2 ) ;



int main()
{
    char s[]  = "bankai getsuga tenshou" ; 
    char s2[] = "bankai" ;
    
    if(compare(s , s2)){
        printf("true") ;
    }
    else{
        printf("false") ; 
    }
    return 0 ;
}


int compare(char *s , char *s2 ){
    int len1 = strlen(s) ; 
    int len2 = strlen(s2) ; 
    bool check = true;  

    if(len2>len1){
        return false ; 
    }

    for(int i = 0 ; i<len2 ; i++){
        if(s[i]!=s2[i]){
            return false ; 

        }
}


    
   
    
}



