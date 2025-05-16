// demonstration of how to remove array 

#include <stdio.h>
#include <string.h>




int main(){
    char string[] = "My name is Vansh";
   int  newpos = 0 ;
    int index = 0;
    int length = strlen(string);


    while(index<length){
        if(!(string[index]== 'a' || string[index] == 'i'  || string[index]=='o' || string[index] == 'e' || string[index]== 'u'  )){
            
            string[newpos] = string[index];
            newpos++;
        }
        index++;
    }
    string[newpos] = '\0'; // here this is added since string ends with null characters.


     printf("%s", string);
    return 0;
}