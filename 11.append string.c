#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_append(char *s1 , char *s2){
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);

    int size = s1_length + s2_length + 1;
    char*s = calloc(size, sizeof(char));
    for(int i = 0 ; i<s1_length ; i++){
        s[i] = s1[i];
    }

    for(int i = 0 ; i<s2_length ; i++){
        s[s1_length + i] = s2[i]; 
    }

    s[size - 1] = '\0';

    return s;

}

int main()
{
    char first[20] = "first ";
    char second[10] = "second";

    strcat(first , second);
    printf("first: %s \n",first);

    printf("\n");

    // using second method to append two strings using pointers and functions .
    char s1[] = "xyz";
    char s2[] = "wxyz";

    char *s3 = string_append(s1 , s2);
    printf("s : %s \n",s3);
    free(s3);
     


    return 0;
}