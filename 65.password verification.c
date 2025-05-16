// program to verify the password
// it should have
// atleast length 8
// atlest 1 uppercase
// alleast 1 lower case letter
// atleast 1 digit
// atleast 1 symbol

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int check(char *s)
{

    int len = strlen(s);

    int i = 0;
    char symbols[] = "@#$*()[]";
    int dig = 0;
    int low = 0;
    int up = 0;
    int sym = 0;

    bool password;
    if (len >= 8)
    {
        for (int i = 0; i < len; i++){
            if (s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '*'){
                sym++;

            }

            if (isdigit(s[i]))
            {
                dig++;
            }

            if (isupper(s[i]))
            {
                up++;
            }

            if (islower(s[i]))
            {
                low++;
            }


        }


        if ((sym > 0) && (dig > 0) && (up > 0) && (low > 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

    int main()
    {
        char s[] = "Vansh1hhsi";


        if (check(s))
        {
            printf("you are verified");
        }

        else
        {
            printf("Unauthorized access");
        }

        return 0;
    }
