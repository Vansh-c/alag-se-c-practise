// program to read a file and display its contents 


#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


int main()
{ 
  FILE *fh;
  
  fh = fopen("75.1file.txt", "r");
  
  if (fh != NULL)
  {
    char c;
    while ( (c = fgetc(fh)) != EOF )
      putchar(c);
    
    fclose(fh);
  
  } 
  else{
    printf("Error value =  %d \n", errno);
    printf("%s",strerror(2)) ; 
  }
  
  return 0;
}