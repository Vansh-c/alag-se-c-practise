
#include <stdio.h> 
#include <string.h>


typedef struct{
    int n ; 
}  number ; 



void binary(int decimal){
    int length = 0 ; 
    char binary[100] ; 
    do{
        if(decimal%2 == 0){
            binary[length] = '0' ; 
        }
        else{
            binary[length] = '1' ; 
        }

        decimal/=2 ; 
        length++ ;
    }while(decimal!=0) ; 


    int mid = strlen(binary)/2 ; 

    for(int i = 0 ; i<mid ; i++){
          char tmp = binary[i] ; 
          binary[i] = binary[mid - i + 1] ;

          binary[mid - i - 1] = tmp ; 

    }


    printf("%s" , binary) ;
}



int main()
{
    number num ; 
    printf("enter number to be converted int binary ") ; 
    scanf("%d" , &num.n) ; 

    printf("\n") ; 
    binary(num.n) ;



    return 0; 
}