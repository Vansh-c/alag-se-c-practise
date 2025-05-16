// to create a substring from string in c


#include <stdio.h> 
#include <string.h> 

void substring(char *orig , char *substr, int index , int lewngth) ; 


int main()
{
    char s[] = "this is string ";
    char substr1[4] ; 
    char substr2[5] ; 

    substring(s , substr1 , 5 , 3) ; 
    substring(s , substr2 , 8 , 4) ; 

    printf("%s \n" , substr1) ;
    printf("%s \n" , substr2) ;


    // if index is more than string length 
    char error[30] ; 
    substring(s , error , 200 , 6) ; 
    printf("error: %s \n ", error) ;
    return 0 ; 
}


void substring(char *orig , char *substr, int index , int length){
   //note: here length parameter is substring length not the actual length of orignal string .
    // if the index is past the length of the original string, just return an 
  // empty string in the substring (this is better than the program crashing!


  if(index>= strlen(orig)){
    substr[0] = '\0' ;
    return  ;  
  }

  int i = 0 ; 
  while(i<length && orig[index+i]!= '\0'){
    substr[i] = orig[index + i] ;
    i++ ; 
  }

  substr[length] = '\0' ;



}
