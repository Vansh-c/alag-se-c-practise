#include <stdio.h>
#include <string.h>

int remove_s(char *string , char c);

int main(){
    char s[] = "this";
    int result = remove_s(s , 'i');

    printf("result:%s", s);
    return 0;
}

int remove_s(char *string , char c){
    int len = strlen(string) ; 
    int pos ; 
    int newpos ;
    for(int pos = 0 ; pos< len ; pos++){

        if(string[pos] == c){
          newpos = pos ; 

          for(int newpos = pos ; newpos<len ; newpos++){
                string[newpos] = string[newpos +1];
          }
        }

        else{
            pos++;
        }
    
    }
}