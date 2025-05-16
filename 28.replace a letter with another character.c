// replace a character in string with another string 

 #include <stdio.h>
 #include <string.h>

 int replace(char *string ,char rep , char new ){
    int length = strlen(string);
    for(int i = 0 ; i<length ; i++){
        if(string[i] == rep){
            string[i] = new;
        }
    }

 }

 int main()
 {
    char s[] = "this is a string";
    replace(s , 'i' , 'o');
    printf("%s" , s);
    return 0;
 }