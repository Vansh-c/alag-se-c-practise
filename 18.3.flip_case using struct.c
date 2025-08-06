// flip case from upper case to lower case .

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct
{
    char *str;
} string;

void flip_case(char *s, int l)
{

    for (int i = 0; i < l; i++)
    {
        if (s[i] != ' ')
        {
            if (s[i] == tolower(s[i]))
            {
                s[i] = toupper(s[i]);
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
    }
}

int main()
{
    string s;
    s.str = (char *)malloc(100) ;
    fgets(s.str, 100, stdin);
    int len = strlen(s.str) ; 

    flip_case(s.str , len) ;

    printf("%s" ,s.str) ;

    free(s.str);

    return 0;
}