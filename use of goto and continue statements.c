


// program to find occrurences of each characters in string . 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int count_repeat(char *s){
   int len = strlen(s) ;
   char unique[100] ; 
   int counted = 0 ;

   for(int i = 0 ; i<len ; i++)
   {
    bool already_counted = false ; 

    for(int j = 0 ; j<counted ; j++){
        if(s[i] == unique[j]){
            already_counted = true;
        }

        if(already_counted){
            continue ; 
        }

        int count = 0  ; 

        for(int j = 0 ; j<len ; j++){
            if(s[i] == s[j] ){
                count++ ; 
            }
        }

        printf("%c - %d \n" , s[i] , count) ; 
        
        unique[counted] = s[i];
        counted++ ; 
    }

   }

    
}

int main()
{

    char s[] = "vansh ana";
    count_repeat(s) ;
    return 0 ; 
}