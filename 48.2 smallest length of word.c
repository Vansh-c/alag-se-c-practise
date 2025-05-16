// to find length of smallest word in string 


#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "anubhav another name is idiotbhav";
    char c[] = " .,;:\n\t" ; 
    int len = strlen(str) ; 
    int min = strlen(str);
    int count = 0 ;
    int i = 0 ;

    while(i<len){
        count = 0 ; 
        while(i<len){
            if(strchr(c , str[i])!=NULL){
                break;   
            }
          count++;
          i++;
        }

    

        if(min>count){
            min = count ; 
        }


        while(i<len){
           if(strchr(c, str[i]) == NULL){
            break;
           }
           i++ ; 
        }

    }

    printf("%d" , min) ;
    
    return 0 ; 
}