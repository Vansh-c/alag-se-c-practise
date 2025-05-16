// in this program we will convert mile to kilometer

#include <stdio.h>

float conversion(float current_kilo){
    return current_kilo/1.6;
}

int main()
{
    float start_kilo =0, current_kilo = 0 , end_kilo  = 0 , step_kilo=0;
    printf("enter starting kilometer , ending kilometer and step kilometer\n");
    scanf("%f", &start_kilo);
    scanf("%f",&end_kilo);
    scanf("%f",&step_kilo);
    
 
    
    printf("\n ");
     printf("%-10x %-10s", "kilometer","Miles \n");
    for(current_kilo = start_kilo ; current_kilo<end_kilo ; current_kilo+=step_kilo){
            printf("%-10.2f %-10.2f \n", current_kilo , conversion(current_kilo) );
    }

    return 0;
}