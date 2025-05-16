#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];
    char ch;

    // Open a file in write mode
    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Using fputc() to write a single character
    fputc('A', fp);
    fputc('\n', fp);

    // Using fputs() to write a string
    fputs("Hello, World!\n", fp);
    fclose(fp);

    // Open the file in read mode
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Reading using fgets():\n");
    // Using fgets() to read a line
    while (fgets(str, 100, fp) != NULL) {
        printf("%s", str);
    }

    // Close the file
    fclose(fp);

    return 0;
}
