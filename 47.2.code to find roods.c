#include<stdio.h>
float f(float x);
float df (float x);

int main()
{
    int itr, maxmitr; // itr is the iteration number and maxitr is the maximum allowable iteration 
    float x0=1.0, x1; // x0 is the initial value and x1 is result 
    scanf("%d", &maxmitr);
float h;
for (itr=1; itr<=maxmitr; itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        x0=x1;
    }
printf("Root = %8.6f\n", x1);
return 0;
}
float f(float x)
{
    return x*x - 4*x + 9;
}
float df (float x)
{
    return 2*x-4;
}