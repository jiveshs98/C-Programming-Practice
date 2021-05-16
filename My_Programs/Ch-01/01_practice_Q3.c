#include <stdio.h>

int main(){
    
    // Convert Celsius to Fahrenheit

    float celsius, result;

    printf("\nEnter temperature in \u00B0C: ");
    scanf("%f", &celsius);

    result = (celsius * 9/5) + 32;

    printf("\nTemperature in \u00B0F is: %f \u00B0F\n\n", result);

    return 0;
}