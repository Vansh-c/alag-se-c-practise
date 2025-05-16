#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int occur(char *string , char *word);
// int occur(char string[] , char word[]);  // above can also be written like this.
int main()
{
    char s[] = "this is";
    char word[] = "is";
    int result = occur(s , word);
    printf("the occurrence of given character is %d", result); 
    return 0;
}

int occur(char *string, char *word){
    int slen = strlen(string);
    int wlen = strlen(word);
    int end = slen - wlen +1;
    int count = 0 ; 

    for(int i = 0 ; i<end ; i++){
        bool word_found = true; 
        for(int j = 0 ; j<wlen ; j++){
            if(word[j]!= string[i+j]){
                word_found = false;
                break;
            }
        }

        if(word_found){
            count++;
        }
    }

    return count;
    
}