#include <stdio.h>


int swap(int a, int b){              // here we are passing by value , means value of x will will be passed to variable a and y will be passed to b so no change will occur.
    int bak = a;
    a= b ;
    b = bak;

}

int swap2(int *a, int *b){
    int s = *a;
    *a = *b;
    *b = s;

}

int main()
{
    int x = 5;
    int y = 10;
    swap(x,y);
    printf("x:%d \n y:%d \n",x,y);

    // belows is pass by reference example 

    printf("below is pass by refernce / pointer example \n\n");

    swap2(&x , &y);  // x and y ka address hum a and b ko pass kar rahe hai 
    printf("x:%d \ny:%d \n",x , y);

    // in functions pass by value method, we normally have to worry about returning the value , thus pointer makes it easier without worrying about returning the function . 

    // below is example of dereferncing the pointer 
    printf("below is an example of dereferncing the pointer \n\n");

    int age = 18;
    int *age1  = &age;

    printf("%p \n",age1);
    printf("%d \n",*age1);     // dereferncing the pointer 
    printf("%d \n", *(&age));   // dereferncing the pointer 

    return 0;
}