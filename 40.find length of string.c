#include <stdio.h>

int find_length(char *s, int *length);

int main() {
    char str[] = "Vansh Joshi";
    int length = 0;
    
    int (*s)(char *, int *) = find_length;
    
    s(str, &length);
    
    printf("The length of the string is %d\n", length);

    return 0;
}

int find_length(char *s, int *length) {
    int i = 0;

    while(s[i] != '\0') {
        (*length)++; 
        i++;
    }
}
