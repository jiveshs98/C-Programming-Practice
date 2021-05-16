// Income tax calculator
// 2.5L-5.0L    ->  5% tax
// 5.0L-10.0L    ->  20% tax
// Above 10.0L    ->  30% tax


#include <stdio.h>

int main(){
    float income, tax=0;
    printf("\n Enter your income: ");
    scanf("%f", &income);

    if (income>250000 && income<=500000){
        tax += 0.05 * (income - 250000);
        printf("\nTax to be paid: Rs %f\n", tax);
    }

    else if (income>500000 && income<=1000000){
        tax += 0.20 * (income - 500000);
        printf("\nTax to be paid: Rs %f\n", tax);
    }

    else if (income>1000000){
        tax += 0.30 * (income - 1000000);
        printf("\nTax to be paid: Rs %f\n", tax);
    }

    else {
        printf("\nTax to be paid: Rs %f\n", tax);
    }
    return 0;
}