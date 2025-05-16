#include <stdio.h>

int main()
{
    char str1[] = "abba";      // note ye integer nahi ho sakta 
    int half = (sizeof(str1)-1)/2;
    int value = sizeof(str1)-1;
    


    for(int i = 0 ; i<half ; i++){
        if(str1[i] == str1[value - i - 1]){
            if(i==(half - 1)){
                printf("palindrome");
                
            }
        }
            

        else{
            if(i == (half-1)){
                printf("the given number is not palindrome");
                break;
            }

        if(i !=(half-1)){
            continue;
        }
        }
    }
    return 0;
}