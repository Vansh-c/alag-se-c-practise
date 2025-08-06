// here we will append two strings using struct 

#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 


typedef struct{
    char *s1 ; 
    char *s2 ; 
} str ; 


char *merge(char *str1 , char *str2){
    int l1  = strlen(str1) ; 
    int l2 = strlen(str2) ; 
    int total = l1 + l2 ; 

    if(l1>0&&(str1[l1-1]=='\n')){
        str1[l1-1] = '\0' ; 
        l1-- ; 
    }

    if(l2>0 && str2[l2-1]=='\n'){
        str2[l2-1] = '\0' ; 
        l2-- ; 
    }

    char *s3 = (char *)malloc(sizeof(char)*(l1+l2)) ; 

    for(int i = 0 ; i<l1 ; i++){
        *(s3 + i) = str1[i] ; 
    }


    for(int i = 0 ; i<l2 ; i++){
       *(s3 + l1 + i) = str2[i] ; 
    }

    s3[total-1] = '\0' ; 

    return s3;

}



int main()
{
    str *string = (str *)malloc(sizeof(string)) ; 
    string->s1 = (char *)malloc(100) ;   // string->s1 equivalent to (*string).s1 
    string->s2 = (char *)malloc(100) ;

    printf("enter first string \n") ; 
    fgets(string->s1 , 100 , stdin) ; 

    printf("enter second string \n") ;
    fgets(string->s2 , 100 , stdin) ; 

    char *str_merged  = merge(string->s1 , string->s2) ; 

    printf("\n") ;

    printf("%s" , str_merged) ;

    free(string) ; 
    free(str_merged) ; 
    free(string->s1) ; 
    free(string->s2) ;

   return 0 ;
}