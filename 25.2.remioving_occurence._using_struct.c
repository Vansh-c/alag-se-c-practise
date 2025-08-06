// this exampel is doing using struct 


#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

typedef struct{
    char *s ; 
} string ; 


void remove_occurence(char *s , char c){
    int l1 = strlen(s) ; 
    int pos ; 
    int newpos;  


    for(pos = 0 ; pos<l1 ; pos++){
        if(s[pos] == c){
            newpos = pos ; 

            for(newpos = pos ; newpos<l1 ; newpos++){
                s[newpos] = s[newpos + 1] ; 
            }
        }

        else{
            pos++ ; 
        }
    }

}


int main()
{
    string str;
    str.s = (char *)malloc(100*sizeof(char)) ; 
    
    printf("enter the string \n") ; 
    fgets(str.s , 100 , stdin) ; 

    printf("%s \n" , str.s) ; 
    printf("enter the character to be removed \n") ; 
    char c ;
    scanf("%c" , &c) ; // use newline in buffer to consume new line left in buffer


    remove_occurence(str.s , c) ; 

    printf("%s" , str.s) ;

    free(str.s) ;





    return 0 ; 
}