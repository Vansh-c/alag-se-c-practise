#include <stdio.h> 
#include <string.h>


int ret(char *s , char u , char v){
  int len = strlen(s) ; 

  for(int i = 0 ; i<len ; i++){
    if(s[i] == u){
      s[i] = v ; 
    
    }
  }
}

int main()
{
  char s[] = "bolo har har Mahadev" ; 
  ret(s , 'a' , 'o') ; 

  printf("%s" , s) ; 





  return 0 ;
}