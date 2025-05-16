#include <stdio.h>
#include <stdbool.h>

bool freeze_c(int temperature){
    if(temperature <=0){
        return true;
    }
    else{
        return false;
    }
}

bool freeze_f(int temperature){
    if(temperature <=32){
        return true;
    }
    else{
        return false;
    }
}


bool is_freezing(bool (*freeze_check)(int)){
    int temperature ; 
    printf("Enter temperature : \n");
    scanf("%d",&temperature);

    if(freeze_check(temperature)){
        printf("It's freezing \n");
    }

    else{
        printf("it's not freezing \n");
    }


}

int main()
{
    printf("celsius .... \n");
    is_freezing(freeze_c);

    printf("fahrenheit ... \n");
    is_freezing(freeze_f);


    printf("\n\n");

    printf("below is an another example \n");
    int arr[] = {1,2,3,4,5};

    int *ptr = &arr[2];
    *ptr++;

    printf("*ptr = %d ",*ptr);    // here the output is 4 







    return 0;
}