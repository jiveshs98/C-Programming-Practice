// To find average of three numbers using recursion

#include <stdio.h>

float average(int a, int b, int c);

int main() {
    int num1, num2, num3;

    printf("\nEnter first number: ");
    scanf("%d", &num1);

    printf("\nEnter second number: ");
    scanf("%d", &num2);

    printf("\nEnter third number: ");
    scanf("%d", &num3);

    printf("\nThe average is: %f\n", average(num1, num2, num3));

    return 0;
}

float average(int x, int y, int z) {
    return (float)(x+y+z)/3;
}