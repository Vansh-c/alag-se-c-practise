// program to delete entered line in a given file 

#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 


int main() 
{
    // store the filename and temp filename
    char filename[1024] ; 
    char temp_filename[1024] ; 

    // to store each line in a file and string to delete it 
    char delete_line[2048] ;
    char buffer[2048] ; 

    FILE *file, *temp ; 

    // enter filename and have user to store it in filename char array . string will contain neewline character at the end , 
    // replace it with null termnatior ,   to end filename one character earilier as file do not have null character ending . 

    printf("FILE: ") ; 
    fgets(filename , 1024 , stdin) ; 
    filename[strlen(filename) - 1] = '\0';

    // create a temporary filenaem temp_filename, where filename.txt is the name enterd of the file , by the user by first
    //copying the prefix , temp___ , to temp_filename and appending it to orignal filename . 

    strcpy(temp_filename, "temp____");
    strcat(temp_filename, filename);

      // have the user enter the string for which lines should be deleted, and store
     // it into delete_line

    printf("Delete line: ") ; 
    fgets(temp_filename, 1024 , stdin) ; 

    // open the orighnal file for reading and temp file for writing . 
    file = fopen("98.file.txt", "r") ; 
    temp = fopen("temp_filename" , "w") ;

    if (file == NULL || temp == NULL)
    {
      printf("Error opening file(s).\n");
      return 1;
    }

    bool keepreading =  true; 
    do{
        // stores the next line from the file into the buffer. 
        fgets(buffer , 2048 , file) ; 

        // if we reached end of the file stop reading from the file 
        // Otherwise as long as the current line doesn't match the string
        // we want  to delete write the line into the temporary file . 

        if(feof(file)){
            keepreading = false ;
        }
        else if( strcmp(buffer, delete_line)!=0){
            fputs(buffer , temp) ;
        }
    }while(keepreading) ;

    // close our access to the files.
    fclose(file) ; 
    fclose(temp) ;

    //delete the orignal file and temp the name of orignal file. 
    remove(filename) ; 
    rename(temp_filename , filename);
    return 0;
}