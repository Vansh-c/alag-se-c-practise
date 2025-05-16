// write a program that counts the vowel occuring inside the given string 


#include <stdio.h>

int main()
{
    char str[] = "anubhav";
    int count = 0;
    int length = sizeof(str) - 1;

    for(int i = 0 ; i<length ; i++){
        if(str[i] == 'a' || str[i]== 'e' || str[i] =='o' || str[i] == 'i' || str[i] == 'u'){
            count++;
        }
        else{
            continue;
        }
    }

    printf("there are %d vowels in given message", count);
    return 0;
}