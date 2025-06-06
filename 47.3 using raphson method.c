// to find roots using raphson method in c . 


#include <stdio.h>
#include <math.h>


float f(float x){
    return x*x - 4*x + 9;
}

float df(float x){
    return 2*x- 4 ;
}

// float f(float x)
// {
//     return x*log10(x) - 1.2;
// }
// float df (float x)
// {
//     return log10(x) + 0.43429;
// }
void main()
{
    int itr, maxmitr;
    float h, x0, x1, allerr;
    printf("\nEnter x0, allowed error and maximum iterations\n");
    scanf("%f %f %d", &x0, &allerr, &maxmitr);
    for (itr=1; itr<=maxmitr; itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);
        if (fabs(h) < allerr)
        {
            printf("After %3d iterations, root = %8.6f\n", itr, x1);
            
        }
        x0=x1;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");

}




