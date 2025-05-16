#include <stdio.h>

int main(){
    int r = 5 , s ; 

    for(int i = 1 ; i<=5 ; i++){
        for(s = 1 ; s<=r - i ; s++){
            printf(" ");

        }

        for(int j = 1 ; j<=2*i-1 ; j++){
            if(i%2==0){
                printf("0");
            }

            else{
                printf("1");
            }
        }

        printf("\n");
    }
  return 0;
}