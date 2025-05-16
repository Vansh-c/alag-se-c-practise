// to find average of numbers from the file in c . 



#include <stdio.h>
#include <stdlib.h> 


int main()
{
    char buffer[1000] ; 
    double sum  = 0 , num ; 
    double count = 1 ; 

    FILE *f ; 
    f = fopen("78.1.numbers.txt" , "r") ; 

    if(f == NULL){
        printf("error");
        return 1; 
    }

    // char c ; 
    // while((c =fgetc(f))!=EOF){
    //            putchar(c) ; 
    // }

    printf("\n\n\n\n"); 


    while(fgets(buffer , 100 , f) != NULL){

        num = atof(buffer) ; 

        if(count == 1){
            sum = num ; 
        }
        sum = sum + num; 
        count++ ;

    }

    fclose(f) ; 
    printf("the average is %.2f" , sum/count) ; 
    
    return 0 ; 
}