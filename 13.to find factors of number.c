#include <stdio.h>

int main()
{
    int n ; 
    printf("enter the value of number for which you want to find factors \n");
    scanf("%d",&n);

    printf("the factors of entered number is \n\n");
    for(int i=1 ; i<=n ; i++){
        if(n%i == 0){
            printf("%d ",i);
        }
        else{
            continue;
        }
    }

    printf("\n");

    printf("this is by while loop \n\n");

    int i = 1 ;
    while(i<=n){
        if(n%i == 0){
            printf("%d ", i);
            i++;
        }
        else{
            i++;
        }
    }

     printf("\n");

    printf("by using do while loop \n\n ");
    int j = 1;

    do{
        if(n%j == 0 ){
            printf("%d ",j);
            j++;
        }

        else{
            j++;
        }
     }while(j<=n);


    return 0;
}