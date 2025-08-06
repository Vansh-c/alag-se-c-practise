// struct declared string and than reversing 
#include <stdio.h> 
#include <string.h> 

typedef struct{
    char s[100] ; 
} string ; 


void reverse_str(char *s , int l){
    if(*s!='\0'){
        reverse_str(s+1 , l);
        printf("%c" , *s) ;
    }
}




int main(){
    string str; 
    fgets(str.s , 100 , stdin) ;
    str.s[strlen(str.s) - 1] = '\0' ; 
    reverse_str(str.s , strlen(str.s)) ;

    return 0 ;

}