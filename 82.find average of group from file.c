// frond average of numbers in given group from file 


#include <stdio.h> 
#include <stdlib.h>


int main()
{
    FILE *f; 

    f = fopen("82.num.dat" , "r") ; 

    if (f == NULL)
    {
      printf("Error opening file.\n");
      return 1;
    }


    double next_number = 0 ; 
    int remaining_group_numbers = 0 ; 
    int group_length;
    double total = 0 ; 

    while(!feof(f)){
        // feof searches for end of file . 
        if(remaining_group_numbers = 0){
            fscanf(f , "%d" ,   &group_length) ; 
            remaining_group_numbers = group_length ; 
            printf("the number of elements  in this group is %d \n" , group_length) ; 
            printf("the data in this group is ") ; 
        }

        else{
            fscanf(f , "%lf" , &next_number) ; 
            printf("%.0lf " , next_number) ; 

            total = total + next_number ; 
            remaining_group_numbers-- ; 

            if(remaining_group_numbers == 0){
                printf("\n Average: %.2f \n\n" , total / group_length) ; 
                total = 0 ;
            }
        }
    }

    return 0 ;
}