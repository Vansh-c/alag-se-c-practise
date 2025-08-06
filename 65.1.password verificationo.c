// password verificatioon using struct. 
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool verification(char *s , int l){

    if(l<8){
        return false;  
    }
    char symbol[] = "@#$%^&*()@" ; 
    char digit[] = "1234567890" ;
    bool check_symbol = false ; 
    bool check_digit = false;  
    bool isuppercase = false ; 
    bool islowercase = false ; 

    for(int i = 0 ; i<l ; i++){
        if(strchr(symbol , s[i])!=NULL){
            check_symbol = true; 
        }
       if(strchr(digit, s[i])!=NULL){
        check_digit = true; 
       }
       if(check_digit && check_symbol){
        break ; 
       }
    }

    for(int i = 0  ; i<l ; i++){
        if(islower(s[i])){
            islowercase = true; 
        }
        if(isupper(s[i])){
            isuppercase = true ; 
        }

        if(islowercase && isuppercase){
            break ;
        }
    }

    if(check_digit && check_symbol && islowercase && isuppercase){
        return true;  
    }
    else{
        return  false ; 
    } 
    

    
}

typedef struct{
    char s[100] ; 
} string; 




int main(){
   string str;  
   printf("enter the string \n") ; 
   fgets(str.s , 100 , stdin) ;

   str.s[strlen(str.s) - 1] = '\0' ;

   if(verification(str.s  , strlen(str.s)) == true){
    printf("welcome") ; 
   }
   else{
      printf("you are not welcome") ;
   }

    return 0 ;
}

