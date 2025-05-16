#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("enter the string \n");
    scanf("%[^\n]s", &str);
    printf("%s \n", str);
    int len = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    printf("the length of the given string is %d \n\n", len);

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", toupper(str[i]));
        }

        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", tolower(str[i]));
        }
        else if (str[i] = ' ')
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}