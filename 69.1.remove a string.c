#include <stdio.h> 
#include <string.h> 

typedef struct{
    char s[100] ; 
} string; 

void remove_position(char *s , int l , int pos) ;


int main()
{

    string str; 
    printf("enter the string \n") ; 
    fgets(str.s , 100 , stdin) ;
    str.s[strlen(str.s) - 1] = '\0' ;

    remove_position(str.s , strlen(str.s)  , 2) ;
    printf("%s" , str.s) ;



    return 0 ;
}


void remove_position(char *s , int l  , int pos){

    for(int i = 0 ; i<l ; i++){
        if(pos == i){
            for(int j = pos ; j<l-1 ; j++){
                s[j] = s[j+1] ; 
            }

            l = l - 1 ; 
            s[l] = '\0' ;
        }
    }
}