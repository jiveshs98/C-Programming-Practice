#include <stdio.h>

int main(){
    
    // To calculate area of rectangle from user input

    float length, breadth;

    printf("\nEnter length: ");
    scanf("%f", &length);
    printf("\nEnter breadth: ");
    scanf("%f", &breadth);

    printf("\nArea of Rectangle is: %f\n\n", length * breadth);

    return 0;
}