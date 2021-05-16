// To print sum and average of two numbers using pointers

#include <stdio.h>

void sum_avg(int *n1, int *n2, int *sum, float *avg);

int main(){
    int num1, num2, sum;
    float avg;
    printf("\nEnter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);
    sum_avg(&num1, &num2, &sum, &avg);
    printf("\nThe sum of %d and %d is: %d\n", num1, num2, sum);
    printf("\nThe average of %d and %d is: %f\n", num1, num2, avg);
    return 0;
}

void sum_avg(int *n1, int *n2, int *sum, float *avg){
    *sum = *n1 + *n2;
    *avg = *sum / 2;
}