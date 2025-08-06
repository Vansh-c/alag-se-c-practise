#include <stdio.h> 
#include <stdbool.h> 
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *s; 
} string;

int count_occurence(char *s, char *w, int l1, int l2) {
    int count = 0;
    int end = l1 - l2 + 1;

    for (int i = 0; i < end; i++) {
        bool check = true;
        for (int j = 0; j < l2; j++) {
            if (s[i + j] != w[j]) {
                check = false;
                break;
            }
        }
        if (check) count++;
    }

    return count;
}

int main() {
    string str;
    str.s = (char *)malloc(100 * sizeof(char));

    printf("Get the string:\n");
    fgets(str.s, 100, stdin); 
    str.s[strlen(str.s) - 1] = '\0' ; 

    char *s2 = "is";

    int l1 = strlen(str.s);
    int l2 = strlen(s2);

    int c = count_occurence(str.s, s2, l1, l2);

    printf("Occurrence = %d\n", c);

    return 0;
}
