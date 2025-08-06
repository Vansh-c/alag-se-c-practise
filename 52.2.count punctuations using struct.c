// making string using struct to count punctuations 


#include <stdio.h> 
#include <string.h> 


typedef struct{
    char s[100];  
}string ; 


int count_punctuations(char *s, int l){
    int count = 0 ; 
    char *c = ",.'\"" ;


    for(int i = 0 ; i<l ; i++){
        if(strchr(c , s[i])){
            count++ ; 
        }
    }

    return count ; 
}

int main()
{
    string  str ; 
    printf("enter the string \n") ; 
    fgets(str.s , 100 , stdin) ;

    int result = count_punctuations(str.s , strlen(str.s)) ;

    printf("the punctuations in a given text is %d" , result) ;



    return 0 ;
}