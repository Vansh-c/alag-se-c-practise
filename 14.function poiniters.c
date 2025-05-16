#include <stdio.h>

int function(int x){
    printf("x:%d \n",x);
}

int add(int a , int b){
    return a + b;
}

// below is few more functions . 

int subtract(int a , int b){
    return a-b;
}

int mul(int a , int b){
    return a*b;
}

int divide(int a , int b ){
    return a / b;
}


int (*select_operation())(int , int)
{
    int option = 0 ; 
    printf("option 1 for subtraction , 2 for multiplication , 3 for division \n");
    scanf("%d",&option);

    if(option == 1){
        return subtract;    // this means if option == 1 , return pointer to the subtract function .
    }
    else if(option == 2){
        return mul;
    }
    else if(option == 3){
        return divide ; 
    }
    else{
        return NULL;
    }
}





int main()
{
    int (*function_pointer)(int);    // first we make a pointer function which will point to integer 
    function_pointer = &function;    // then we passed memory address of function to the pointer function_pointer .
    (*function_pointer)(6);          // we dereferenced the function pointer and passed the value.

    printf("\n");

    int (*addon)(int , int) = add;
     int x = 8 , y = 9 ; 
     int result = addon(x ,y);
     printf("%d \n", result);

     printf("\n");

     int (*arr[])(int , int ) = {subtract , mul , divide};
     int s = (*arr[0])(4,5);
     printf("a - b =%d \n", s);

     // pointer can also be printed like below 
     printf("a*b = %d \n",(*arr[1])(8,7));
     printf("a/b = %d \n",(*arr[2])(16,4));


     // below is example of calling of refernced function or derefencing function 

     int(*operation)(int , int) = select_operation();
     printf("answere = %d \n", operation(20 , 5));




    return 0;
}