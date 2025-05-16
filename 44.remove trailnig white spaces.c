// in this program we will remove trailing white spaces in c 

#include <stdio.h>
#include <string.h>

int trim(char *s);


int main(){
    char str[] = "this is a string \t\t\n";
    printf("before: %s " , str);

    trim(str) ;

    printf("after : %s \n"  , str);
    return 0;
}


int trim(char *s){
   int len= strlen(s) - 1 ; 

   while(len>0){
    if(s[len] == ' ' || s[len] == '\n' || s[len] == '\t'){
        len--;
    }
    else{
        break ; 
    }
   }

   s[len + 1] = '\0';
}