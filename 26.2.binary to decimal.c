#include <stdio.h>
#include <string.h>



int binary_conversation(int decimal){
    int length = 0 ;
    char binary[256];
    do{
      if(decimal%2==0){
         binary[length] = '0';
         
      }
      else{
         binary[length] = '1';
         
      }
      decimal/=2;
      length++;

    }while(decimal!=0);

   int mid = strlen(binary)/2 ;

   for(int i = 0 ; i<mid ; i++){
    int temp = binary[i] ; 
    binary[i] = binary[mid - i +1] ; 
    binary[mid - i +1] = temp ; 
   }

   printf("%s" , binary);

}


int main()
{
    binary_conversation(8) ; 
    return 0 ; 
}