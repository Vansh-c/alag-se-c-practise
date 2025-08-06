// program to remove the vowels using struct 


#include <stdio.h> 
#include <string.h> 


typedef struct{
    char s[100] ; 
    char  *w ; 
} string ; 

void vowel_remove(char *s , char *w , int l1 , int l2){
           for(int i = 0 ; i<l1 ; i++){
                for(int j = 0 ; j<l2 ; j++){
                    if(s[i] == w[j]){
                        for(int k = i ; k<l1 ; k++){
                            s[k] = s[k+1] ;
                        }
                        i--;
                        break;
                    }
                }
           }

}


int main()
{
    string str ; 
    fgets(str.s , 100 , stdin) ; 
    str.s[strlen(str.s)-1] = '\0' ; 

    str.w = "aeiouAEIOU" ;
    int len1 = strlen(str.s) ; 
    int len2 = strlen(str.w) ;


    vowel_remove(str.s , str.w , len1 , len2) ; 
    printf("%s" , str.s) ;


    return 0 ; 
}