// using struct to count the vowet by making string inside struct 


#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>


typedef struct{
    char *s ; 
} get_str;  

typedef struct{
    char *s2 ; 
} check_string; 


int count_vowel(char *s1 , char *s2){
    int count = 0 ; 


    for(int i = 0 ; i<strlen(s1) ; i++){
        if(strchr(s2 , s1[i])!=NULL){
            count++ ; 
        }
    }

    return count ; 
}


int main()
{
    check_string *str = (check_string *)malloc(sizeof(check_string)) ;  ; 
    (*str).s2 = "aeiouAEIOU";

    get_str  *string = (get_str *)malloc(sizeof(get_str)) ;
    string->s = (char *)malloc(100*sizeof(char)) ;
    fgets((*string).s , 100 , stdin) ; 

    printf("the entered string is \n") ; 
    printf("%s " , (*string).s)  ; 

    printf("the number of vowels in entered string is %d" , count_vowel((*string).s , (*str).s2)) ; 


    free(string->s) ;
    free(string) ; 
    free(str) ;



 return  0 ; 
}