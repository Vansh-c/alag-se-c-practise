// program to trim leading white space in c 

#include <stdio.h>

void r(char *s);

int main()
{
    char str[] = " \n\n\t this is my bankai" ; 
    printf("%s \n", str);
    r(str); 

    printf("%s \n", str);
    return 0;
}


void r(char *s){
    int count = 0 ; 

    while(s[count] = '\n' || s[count] == '\t'  || s[count] == ' '){
        count++;
    }

    if(count !=0){
        int i = 0; 

        while(s[i + count] == '\0'){
            s[i] = s[i + count] ; 
            i++;
        }

        s[i] = '\0';
    }
}