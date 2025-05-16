// to find maximum occuring digit here 


#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

void find_max(char *s);

int main()
{
    char s[] = "vaaa nn sssh";
    find_max(s);

    return 0;
}


void find_max(char *s){
    int len = strlen(s) ; 
    char max_char ; 
    int counted = 0 ; 
    char unique[100];
    int max_count =0; 


    for(int i = 0 ; i<len ; i++){
         bool already_counted = false;  

         for(int j = 0 ; j<len ; j++){
            if(s[i] == unique[j]){
                bool already_counted = true;
                break;
            
            }
         }

         if(already_counted){
            continue; 
         }

         unique[counted] = s[i] ; 
         counted++ ; 

         int count = 0 ; 
         for(int j = 0 ; j<len ; j++){
            if(s[i] == s[j]){
                count++;
            }
         }

         if(counted ==1){
             max_count  = count;  
             max_char = s[i];
         }

        else if(count>max_count){
            max_count = count ; 
            max_char = s[i];
         }


    }

    printf("%c : %d" , max_char , max_count);

}