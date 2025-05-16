#include <stdio.h>

int func(int x){
    printf("%d \n",x);
}

int *func2(int x){
    printf("%d \n", x);
}


int add(int a , int b){
    return a+b;
}

int sub(int a , int b){
    return a-b;
}

int mul(int a , int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}


int (*select_operation())(int , int){
    int option;
    printf("Select an operation \n 1) subtract \n 2)multiply \n 3) division \n");
    printf("enter: ");
    scanf("%d", &option);

    if(option == 1){
        return sub;
    }
    else if(option == 2){
        return mul;
    }

    else if(option == 3){
        return div;
    }
}

int main()
{
    int(*function_pointer)(int);             // made a pointer variable
    function_pointer = &func;                // passed the address of teh function into the given pointer variable

    (*function_pointer)(4);                 // dereferenced the function pointer and given it value 4

    printf("below is another example \n");
    *func2(6);

    printf("below is third example \n");

    int(*add_pointer)(int , int) = add;    // this line means the declared pointer add_pointer points to the function add
    int a = 4 ;
    int b = 45;
    int result = add_pointer(a,b);
    printf("result %d \n",result);

    // working with arrays and pointers 

    int (*array[])(int , int ) = {sub , mul , div};
    int product = (*array[1])(5,6);
    int subtract = (*array[0])(3,4);
    int division = (*array[2])(9,3);

    printf("product: %d \n",product);
    printf("subtract: %d \n",subtract);
    printf("division : %d \n \n", division);


    printf("another example \n");

    int (*operation)(int , int) = select_operation();
    printf("answer: %d \n",operation(20 , 5));



    

    return 0;
}