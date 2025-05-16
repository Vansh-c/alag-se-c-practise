// program to split string at the index 


#include <stdio.h> 
#include <string.h>

int split(char *s ,  char *first , char *second , int index){
    
    for(int i = 0 ; i<index; i++){
        first[i] = s[i] ; 

    }
    first[index] = '\0' ; 

    for(int i = index ; i<strlen(s) ; i++){
        second[i - index] = s[i] ; 
    }
    
    second[strlen(s)] = '\0' ; 

}


int main()
{
    char s[] = "I am a naughty boy"; 
    char first[100] , second[100] ; 

    split(s , first , second , 13) ; 

    printf("%s \n" , first) ;
    printf("%s \n" , second) ; 

    return 0;
}