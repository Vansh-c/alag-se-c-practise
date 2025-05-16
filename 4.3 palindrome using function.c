#include <stdio.h>

int isPalindrome(int num){
  int rev  = 0;
  // int rev;
  int orignal_num = num;
  int rem;
  while(num!=0){
    rem = num%10;
    rev = rev*10 + rem;
    num = num/10;

  }
  printf("%d \n",rev);

  if(rev == orignal_num){
    printf("the entered number is a palindrome");
  }

  else{
    printf("the given number is not a palindrome");
  }
}

int main(){
  int num ;
  printf("enter a number \n");
  scanf("%d",&num);
   

  

  isPalindrome(num);
}