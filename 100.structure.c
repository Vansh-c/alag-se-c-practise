#include <stdio.h> 
#include<string.h>
#include <stdlib.h>

struct student {
    char name[59] ; 
    char id[20] ; 
    int age ; 
    int grades[5] ; 

};


// using structure as function
typedef struct{
    char god[20] ;
    char surname[20] ;
}Mahadev ; 


void god(Mahadev krishna){
    printf("\n%s\n" , krishna.god) ; 
    printf("%s\n" , krishna.surname) ; 
}


// using structure as pointers 

typedef struct{
    int x ; 
    int y ; 
    int bankai[12] ;  
} point ; 

void print_point(point points[]){
    for(int i = 0 ; i<10 ; i++){
        printf("p%d = (%d %d)\n", i , points[i].x , points[i].y);
    }
}


// manipulate structure by using arrays 

typedef struct{
    int *arr ; 
} data ; 

int main()
{
    struct student vansh ; 
    vansh.age = 19 ; 
    printf("%d" , vansh.age);


    strcpy(vansh.name , "Vansh Joshi");
    strcpy(vansh.id , "112233434") ; 
    vansh.grades[0] = 55 ; 
    vansh.grades[1]  = 55 ; 
    vansh.grades[2]  = 3; 
    vansh.grades[3]  = 44; 
    vansh.grades[4]  = 56 ; 
    printf("\n") ;
    
    // using structure in functions
    printf("below is by using function \n\n") ;

    printf("%s \n" , vansh.name) ; 
    printf("%d \n" , vansh.id) ; 
    for(int i = 0 ; i<5 ; i++){
        printf("%d " , vansh.grades[i]) ; 
    }
    
    Mahadev krishna ; 
    strcpy(krishna.god , "Vishnu"); 
    strcpy(krishna.surname , "Vasudeva krishna");

    god(krishna);






    // using structure in arrays


    printf("\n\nusing structure as arrays \n");
    point p1 = {2,3,{6,7,8}} ; 
    printf("p1.x:%d \n" ,p1.x ) ; 
    printf("p1.y:%d \n" ,p1.y ) ; 
    printf("p1.bankai:%d \n" ,p1.bankai[0] ) ; 


    point points[10] ; 
    for(int i = 0 ; i<10 ; i++){
        points[i].x = i ; 
        points[i].y = 10 - i;
    }
    printf("\n");

    print_point(points);


    // manipulate structure by using arrays 
    printf("\n\n manipulate arrays using structure \n") ; 
    data x ; 
    data y ; 

    x.arr = malloc(5*sizeof(int));
    y.arr = malloc(5*sizeof(int));


    x.arr[0] = 1 ;
    x.arr[1] = 8 ;
    x.arr[2] = 9 ;
    x.arr[3] = 4 ; 
    x.arr[4] = 7 ;

    
    y.arr[0] = 55 ;
    y.arr[1] = 7;
    y.arr[2] = 39 ;
    y.arr[3] = 45 ; 
    y.arr[4] = 70;



    for(int i = 0 ; i<5 ; i++){
        printf("x.arr[%d] = %d \n" , i , x.arr[i]) ; 
    }




    return 0 ; 
}