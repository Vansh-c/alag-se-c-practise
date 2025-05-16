 // to check whether given list is anagrams or not . 

 #include <stdio.h> 
 #include <string.h> 
 #include <stdbool.h> 
 #include <ctype.h> 

 bool isanagram(char *s , char *b);


 int main()
 {
    char w1[] = "listen" ; 
    char w2[] = "mnb" ; 

    if(isanagram){
        printf("anagram \n"); 

    }

    else{
        printf("not an anagram \n");
    }

    return 0; 
 }

 bool isanagram(char *w1 , char *w2){
    int len1 = strlen(w1) ; 
    int len2 = strlen(w2) ; 

      char  wr1l[26] = {0} ;
      char  wr2l[26] = {0} ;


      for(int i = 0 ; i<len1 ; i++){
        int lower = tolower(w1[i]) ; 
        wr1l[lower - 'a']++ ; 
      }

      for(int i = 0 ; i<len2 ; i++){
        int lower = tolower(w2[i]) ; 
        wr2l[lower - 'a']++ ; 
      }


      for(int i = 0 ; i<26 ; i++){
        if(wr1l[i] != wr2l[i]){
            return false ; 
        }
      }


      return true; 



 }
