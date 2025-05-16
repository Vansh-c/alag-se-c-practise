// program to merge 2 files in c 


#include <stdio.h> 


int main()
{
    FILE *f1 , *f2 , *merge ; 

    f1 = fopen("86.f1.txt" , "r");
    f2 = fopen("86.f2.txt" , "r");
    merge = fopen("86.merge.txt" , "a");



    if(f1 == NULL || f2 == NULL || merge == NULL){
        printf("some error occured");
    }

    char c ; 
    while((c = fgetc(f1))!=EOF){
        fputc(c , merge);
    }

    while((c = fgetc(f2))!=EOF){
        fputc(c , merge);
    }



    return 0; 
}