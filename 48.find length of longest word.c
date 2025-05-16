// to find the length of longest word in a string 


#include <stdio.h>
#include <string.h>


int main(){


    
    char s[] = "i is bankai dididii" ; 
    int count; 
    int tmp ;
    int j = 0 ;

    char m[] = " ,.;:\n\t"; 
    int len = strlen(s);

    for(int i = 0 ; i<len ; i++){
        count = 0 ;

        while(i<len){
            if(strchr(m , s[i])!=NULL){
                break;
            }
            i++;
            count++ ; 
        }

        if(count>tmp){
            tmp = count; 
        }

        while(i<len){
            if(strchr(m , s[i])== NULL){
                break;
            }
            i++ ; 
        }

    }

        printf("%d", tmp+1);
        return 0;
    }




    
       