

#include <stdio.h> 
#include <string.h>


typedef struct{
   char *s  ; 
} string;  


int reverse(char *s , int l){

    for(int i = 0 ; i<l/2 ; i++){
        int tmp = *(s + i) ; 
        *(s + i) = *(s + l - i - 1) ; 
        *(s + l -i - 1) = tmp ; 

    }
}


int main()
{

    string str ; 
    fgets(str.s , 100 , stdin) ; 
    printf("%s " , str.s);
    printf("\n") ; 

    reverse(str.s , strlen(str.s)) ; -+



       printf("%s" , str.s) ;
    return 0 ;
}

