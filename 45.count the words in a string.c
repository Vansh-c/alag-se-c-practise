// here we will write a program to count the word in a string 


#include <stdio.h>
#include <string.h>

int count_words(char *s);

int main()
{
    char str[]= "this is something. This is ,oops";
    printf("no. of words in above string is %d" , count_words(str));
    return 0;
}

int count_words(char *s){
   
  int len = strlen(s) +1 ; 
  int count = 0 ;
  char nonwords[] = " ,.;\n\t";



 for(int i = 0 ; i<len ; i++){
    while(i<len){
        if(strchr(nonwords , s[i]) !=NULL){
            break;
        }
        i++;
      }
    
      count++ ;

      while(i<len){
        if(strchr(nonwords , s[i])== NULL){
            break;
        }
        i++  ; 
      }
 } 

 return count ; 
 

}