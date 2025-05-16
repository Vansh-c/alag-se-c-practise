// fibonacci series uwsing recursion 


#include <stdio.h>

int fibonacci(int a){
        if(a == 0 || a == 1){
            return a;
        }

        else{
            return  fibonacci(a-1) + fibonacci(a-2);
        }
    
}

int main()
{
    printf("enter the length until which you want to find the fibonacci series upto \n");
    int n;
    scanf("%d",&n);

    printf("the fibonacci series for the enteed number is \n");

   for(int i = 0 ; i<n ; i++){
    printf("%d \n",fibonacci(i));
   }
    return 0;
}