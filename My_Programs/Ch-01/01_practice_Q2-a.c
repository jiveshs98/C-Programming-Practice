#include <stdio.h>

int main(){
    
    // Calculating area of circle

    float pi = 3.14, radius;

    printf("\nEnter radius of circle: ");
    scanf("%f", &radius);

    printf("\nArea is: %f\n\n", pi * radius * radius);

    return 0;
}