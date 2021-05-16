#include <stdio.h>

int main(){
    
    // Calculating area of cylinder
    
    float pi = 3.14, radius, height;

    printf("\nEnter radius: ");
    scanf("%f",&radius);
    printf("\nEnter height: ");
    scanf("%f",&height);

    printf("\nArea of cylinder is: %f\n", pi * radius * radius * height);
    return 0;
}