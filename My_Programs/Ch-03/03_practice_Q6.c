// C Program to find the greatest of 4 numbers

#include <stdio.h>

int main(){
    
    float num1,num2,num3,num4;
    printf("\nEnter first number: ");
    scanf("%f", &num1);
    printf("\nEnter second number: ");
    scanf("%f", &num2);
    printf("\nEnter third number: ");
    scanf("%f", &num3);
    printf("\nEnter fourth number: ");
    scanf("%f", &num4);

    if (num1>num2 && num1>num3 && num1>num4) {
        printf("\n%f is greatest.\n", num1);
    }

    else if (num2>num1 && num2>num3 && num2>num4) {
        printf("\n%f is greatest.\n", num2);
    }

    else if (num3>num1 && num3>num2 && num3>num4) {
        printf("\n%f is greatest.\n", num3);
    }

    else if (num4>num1 && num4>num2 && num4>num3) {
        printf("\n%f is greatest.\n", num4);
    }

    else {
        printf("\nAll are equal.\n");
    }
    return 0;
}