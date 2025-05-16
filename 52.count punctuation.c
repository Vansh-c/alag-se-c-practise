 // a program to count the punctuation marks 

 #include <stdio.h> 
 #include <string.h>
 int count_punct(char *a);
 

 int main()
 {

    char a[100] ; 
    printf("enter string below : \n"); 
    fgets(a , 100 , stdin) ;   

    printf("%s" , a) ;

    printf("the number of punctuation marks are : %d \n" , count_punct(a));




    return 0 ; 
 }

 int count_punct(char *a){
    int len = strlen(a) ; 
    int count = 0 ; 
    for(int i = 0 ; i<len ; i++){
        if(a[i] == ','){
            count++;
        }
    }

    return count ; 
 }