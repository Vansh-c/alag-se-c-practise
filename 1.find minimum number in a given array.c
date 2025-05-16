// make an array and find its minuimym number 


#include <stdio.h>

int main()
{
    int set_of_numbers[] = {2,3,5,4,5,6,7,6,5,9};
    int min= set_of_numbers[0];


    for(int i = 0 ; i<10 ; i++){
        // printf("chckeing myarray[%d] = %d \n",i , set_of_numbers[i]);

        if(set_of_numbers[i]<min){
            min = set_of_numbers[i];

        }
    }

    printf("the minimum number from the given set is %d \n",min);

    //  to find maximum number from the list of numbers 

    int set_of_numbers2[]= {3,4,6,5,4,7,5,6,3,5,0};
    int max = set_of_numbers[0] ; 

    for(int i = 0 ; i<11 ; i++){
        if(max<set_of_numbers2[i]){
            max = set_of_numbers2[i];
        }
        else{
            continue;          // continue is used to skip the iteration . 
        }

    }

    printf("the maximum numbers from this list is %d",max);


    return 0 ;
}