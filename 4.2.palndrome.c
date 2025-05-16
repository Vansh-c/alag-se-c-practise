#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "anubhav is a donkey";
    int mid = sizeof (str1)/2;
    int len = sizeof (str1);
    int reverse;

    for(int i = 0 ; i<mid ; i++){
        reverse = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = reverse;

          if(i == (mid - 1)){
            for(int i = 0 ; i<len ; i++){
                printf("%c",str1[i]);
            }
          }
    }

    return 0;
}