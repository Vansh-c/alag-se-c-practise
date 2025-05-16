// write a program to copy a file in c 


#include <stdio.h> 


int main()
{
    FILE *f , *copy ; 

    f = fopen("85.1.file.txt" , "r") ; 
    copy = fopen("85.2.copy.txt" , "w") ; 

    if(f == NULL || copy == NULL){
        printf("some error occured");
    }

    char c ; 
    while((c = fgetc(f))!= EOF){
        fputc(c, copy ); 
    } 

    fclose(f) ; 
    fclose(copy) ;

    return 0 ;
}