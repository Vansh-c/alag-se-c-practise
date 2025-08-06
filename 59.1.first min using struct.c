// to find first minimum occuring character using struct. 

#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

typedef struct{
    char s[100];
} string;  


void first_min(char *s , int l){
    char min_character; 
    char already[100] ; 
    int count = 0 ; 
    int counted = 0 ; 
    int previous_count = 0 ; 
    bool check; 


    for(int i = 0 ; i<l ; i++){


           count = 0 ;
          check = false;  
          for(int j = 0 ; j<counted ; j++){
            if(s[i] == already[j]){
                check = true ; 
                break; 
            }
          }

          if(check || s[i]==' ' || s[i]=='\0' || s[i]=='\n'){
            continue;  
          }


          already[counted] = s[i] ; 
          counted++ ; 

          for(int j = 0 ; j<l ; j++){
            if(s[i] == s[j]){
                count++ ; 
            }
          }

          if(i == 0){
            previous_count = count ; 
            min_character = s[i] ;
          }

          printf("%d-%d \n" , previous_count, count) ;

          if(count<previous_count){
             previous_count = count ;
             min_character = s[i] ;
          }
        
    }

    printf("%c - %d" , min_character , previous_count) ;
}



int main()
{
    string str; 
    fgets(str.s , 100 , stdin) ;

    first_min(str.s , strlen(str.s));

    return 0 ;
}