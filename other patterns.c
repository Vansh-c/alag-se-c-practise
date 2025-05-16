#include <stdio.h>

int main()
{
    char str[] = "UVPCE";

    for(int i = 4 ; i>=0 ; i--){
        for(int j = 0; j<=i ; j++){
            printf("%c",str[j]);
            if(j==i){
                break;
            }
        }
        printf("\n");
    }

    printf("below is second pattern \n\n");

    for(int i = 1 ; i<=9 ; i++ ){
        for(int j = 1 ; j<=9 ; j++){
        if(j == i || (j ==(10-i))){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");

}
    return 0;
}