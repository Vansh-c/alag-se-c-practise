#include <stdio.h>
#include <string.h>

int ret(char *s , char *c , char *u){
      int len = strlen(s) ;
      for(int i = 0 ; i<len ; i++){
         if(s[i] == *c){
            s[i] = *u ; 
         }
      }

}

int main(){
   char s[] = "this is is ";
   char c = 'i';
   char u = 'c' ; 

   ret(s ,&c , &u) ; 
   printf("%s"  , s) ; 
   return 0 ;
}