#include <stdio.h>

int ncr(int n ,int r);
int fact(int n);

int main()
{
    int i, m ,n, sum = 0;
    printf("input m and n \n");
    scanf("%d %d",&m , &n);
    
    for( i = 1 ; i<=m ; i+=2){
      sum = sum + ncr(n,i);
    }

    printf("result:%d \n",sum);
    return 0;
}

int ncr(int n , int r){
    return fact(n)/fact(r) / fact(n-r);
}


int fact(int n){
    int i = 1, temp = 1;
     for(i = 1 ; i<=n ; i++){
        temp*=i;
     }

     return temp;
}