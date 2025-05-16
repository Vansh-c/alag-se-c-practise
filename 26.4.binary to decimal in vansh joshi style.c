#include <stdio.h> 
#include <string.h>

int decimal(char *bin , int n){
    
    for(int i = 0 ; i<n ; i++){
        if(bin[i]!= '0' && bin[i]!='1' ){
            printf("non-binary"); 
            return 0 ; 
        }
    }

    int sum = 1 ; 
    int dec = 0 ; 

    for(int i = 0 ; i<n ; i++){

        
       for(int j = n- 1 - i ; j>0 ;j--){
        if(bin[i] == '0'){
            continue;
        }
        else if(bin[i] == '1'){
            sum = sum*2 ; 
        }

        if(j == 1){
                dec = dec+sum ; 
                sum = 1 ;
            }
        
       }

       if(bin[i] == '1' && i==n-1){
        dec++ ;
        break; 

       }
    }

    printf("%d" , dec) ; 
}



int main()
{

    char bin[10];
    scanf("%s" , &bin) ;
    int size = strlen(bin) ; 
    decimal(bin , size) ; 
    return 0 ;
}