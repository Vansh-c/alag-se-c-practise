//find root  using bisection method . 

#include <stdio.h>
#include <math.h> 

float func(float x){
    return (x*x*x- 4*x -9) ; 
}


int bisection(float *x , float a , float b , int *itr){
    *x = (a+b)/2 ; 
    ++(*itr) ; 
    // printf("iteration number %3d and X = %7.5f \n");
}



int main()
{
    int itr = 0 , maxmitr ; 
    float x, a ,  b , aller , x1 ; 
    printf("\n enter value of a, b , allowed error and max iteration \n");
    scanf("%f %f %f %d" , &a , &b , &aller , &maxmitr);

    bisection(&x , a , b , &itr) ; 
    
    do{
        if(func(a)*func(x)<0){
            b = x ; 
        }

        else{
            a = x ; 
        }

        bisection(&x1 , a, b , &itr);

        if(( (x1-x)<aller || -(x1-x)<0)  && itr == maxmitr){   // can also put if(abs(x1-x) < aller)
            
            printf("After %3d iterators , root = %6.4f \n", itr , x1);
            
        }
        x = x1 ; 
        
    }while(itr<maxmitr) ; 

    printf("the solution doesnt converge of solution is inconsistent. \n");




    return 0 ; 
}