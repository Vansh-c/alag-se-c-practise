#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year){
    if(year%4 !=0){
        return false;
    }
    else if(year%100!=0){
        return true;
    }
    else if(year%400!=0){
        return false;
    }
    else{
        return true;
    }
}

int main()
{

    for(int i = 2000 ; i<2050 ; i++){
        if(is_leap_year(i)){
            printf("%d leap year \n",i);
        }
        else{
            printf("%d \n",i);
        }
    }

    return 0;
}