#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char str[100];
    printf("enter the string below \n");
    scanf("%[^\n]s",&str);

    int length = strlen(str);
    // printf("%d \n",length);

    for(int i = 0 ;i<length ; i++){
        if(toupper(str[i])){
            str[i] = tolower(str[i]);
        }
        else if(tolower(str[i])){
            str[i] = toupper(str[i]);
        }
    }

    printf("%s\n",str);

    return 0 ;
}