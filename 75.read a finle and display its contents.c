// program to read a file and display its contents 


#include <stdio.h> 


int main()
{
  // fh is the file handle we use to access the file
  FILE *fh;
  
  // open the file in "read mode"
  fh = fopen("75.1.file.txt", "r");
  
  // fopen will return NULL if the file wasn't opened successfully, so we 
  // make sure it has opened OK before accessing the file
  if (fh != NULL)
  {
    // read each character of the file one at a time until end of file (EOF) is 
    // returned to signify the end of the file, output each char to the console
    char c;
    while ( (c = fgetc(fh)) != EOF )
      putchar(c);
    
    // close the file handle as we are done with the file
    fclose(fh);
  
  // if there was a problem opening the file, output an error message
  } else printf("Error opening file.\n");
  
  return 0;
}