// pincode valication  

#include <stdio.h>
#include<stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

bool is_pincode(char *pin){
    int length = strlen(pin);
    if(length>=7 || length<6){
        return false;
    }

    for(int i= 0 ; i<length ;i++){
        if(!isdigit(pin[i])){
            return false;
        }
        if(pin[i] == ' '){
            return false;
        }
    }

    return true;
}

int main(){
    char pincode[6];
    printf("enter your pincode below\n");
    scanf("%s" , &pincode);
    printf("%d \n",strlen(pincode));

    if(is_pincode(pincode)){
        printf("the given code is a valid pin code");
    }
    else{
        printf("the given code is invalid");
    }
    return 0;
}