// saving calculator

#include <stdio.h> 


int main()
{

    double balance = 0  ; 
    double rate_of_return = 0 ; 
    double annula_contribution = 0 ; 
    int total_years = 0  ; 

    printf("********** Savings Calculator ********** \n\n") ; 

    do{
        printf("initial Deposit: ") ; 
        scanf("%lf" , &balance) ; 
        if(balance<0){
            printf("balance must be > 0.00") ; 
        }
    }while(balance<0) ; 

    do{
        printf("Rate of Return : ") ; 
        scanf("%lf" , &rate_of_return) ; 
        if(rate_of_return<0){
            printf("balance must be > 0.00") ; 
        }
    }while(rate_of_return<0) ;
    
    
    do{
        printf("annual Contribution: ") ; 
        scanf("%lf" , &annula_contribution) ; 
        if(annula_contribution<0){
            printf("balance must be > 0.00") ; 
        }
    }while(annula_contribution<0) ; 


    do{
        printf("Years to Grow : ") ; 
        scanf("%d" , &total_years) ; 
        if(total_years<0){
            printf("balance must be > 0.00") ; 
        }
    }while(total_years<0) ; 

    printf("\n %10s %18s %16s %16s \n", "Year" , "Start Balance" , "Interest" , "End balance") ; 

    for(int i = 0 ; i<60 ; i++) printf("*") ; 
    printf("\n") ; 
    for(int time = 1 ; time<=total_years ; time++){
        // here we outputted year and starting balance 
        printf("%20d %18.2f" , time , balance) ; 

        // then we calculate interest 
        double interest = balance*(rate_of_return/100) ;
        balance += interest + annula_contribution ; 

        printf("%16.2f %16.2f \n" , interest , balance) ;

    }
    return 0 ; 
}