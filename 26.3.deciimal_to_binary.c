#include <stdio.h>

int dtb(int num){
    if(num == 0){
        return 0;
    }

    else{
        return (num%2) + 10*dtb(num/2);    // it 4 is entered first its like 0 + 10(0+ 10)
                                           // for 13 its like   1+10(0+10(1+10*(1))) = 1101
    }

}

int main(){
    printf("%d" , dtb(13));
    return 0;
}