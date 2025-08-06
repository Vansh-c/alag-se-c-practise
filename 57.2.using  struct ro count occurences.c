// using struct  to count the occurences of each character 


#include <stdio.h> 
#include <stdbool.h> 
#include <string.h>

typedef struct{
    char s[100] ; 
} string; 

void count_occurences(char *s , int l){
    int count = 0 ; 
    int check ; 
    int counted = 0  ; 
    char unique[100] ;

    for(int i = 0 ; i<l ; i++){
        check = false;  
        count = 0 ;
        for(int j = 0 ; j<counted ; j++){
            if(s[i]==unique[j]){
                check = true ; 
                break ; 
            }
        }

        if(check){
            continue; 
        }

        unique[counted] = s[i] ; 
        counted++ ; 

        for(int j = 0 ; j<l ; j++){
            if(s[i] == s[j]){
                count++ ; 
            }
        }

        if(s[i]!=' ' && s[i]!='\0' && s[i]!='\n'){

             printf("%c - %d \n" , s[i] , count) ;
        }

    }

}


int main()
{
    string  str; 
    printf("enter the string \n") ;
    fgets(str.s, 100 , stdin) ;

    count_occurences(str.s , strlen(str.s)) ;



    return 0 ;
}