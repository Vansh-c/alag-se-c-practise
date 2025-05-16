// write a program to store students 


#include <stdio.h> 


typedef struct{
    int rollno ; 
    char name[40] ;
    int score;  
} student ; 


int main()
{
    student s[20] ; 
    int n ; 
    scanf("%d" , &n) ;    // enter number of students from the test data 


    for(int i = 0 ; i<n ; i++){
        scanf("%d" , &s[i].rollno) ; 
        scanf("%s" , &s[i].name) ; 
        scanf("%d" , &s[i].score) ;  
    }


    // now to print merit list in descending order 

    student temp ; 

    for(int i = 0 ; i< n-1 ; i++){
        for(int j = 0 ; j<n-i-1 ; j++){
            if(s[j].score <s[j+1].score){
                temp = s[j] ; 
                s[j] = s[j+1] ; 
                s[j+1] = temp ; 
            }
        }
    }


    for(int i = 0 ; i<n ; i++){
        printf("%d  " , s[i].rollno) ; 
        printf("%s  " , s[i].name) ; 
        printf("%d  " , s[i].score) ; 
        printf("\n");
    }


    return 0 ; 
}