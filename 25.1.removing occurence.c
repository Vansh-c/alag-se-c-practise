#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void rmve(char *str , char word){
    int len1 = strlen(str) ; 


    for(int i = 0 ; i< len1 ;){
        if(str[i] == word){ 
             for(int j = i ; j<len1 ; j++){
                str[j] = str[j+1] ; 
             }
             i-- ; 
           
        }

        else{
            i++ ; 
        }
    }


}

int main()
{

    char str[] = "this is amazing " ; 
    char w = 'i' ;
    rmve(str , 'a') ;
    printf("%s" , str);
    return 0 ;
}