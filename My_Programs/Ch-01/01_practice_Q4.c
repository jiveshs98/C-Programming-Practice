#include <stdio.h>

int main(){
    
    // Calculate Simple Interest

    int principal, rate, time, interest;

    printf("\nEnter principal: ");
    scanf("%d", &principal);
    printf("\nEnter interest rate in %% : ");
    scanf("%d", &rate);
    printf("\nEnter time in years: ");
    scanf("%d", &time);

    interest = (principal * rate * time) / 100;

    printf("\nThe simple interest is: Rs %d\n\n", interest);

    return 0;
}