// To convert temperature from celsius to fahrenheit

#include <stdio.h>

float convert_cel_to_fah(float c);

int main(){
    float temp_in_celsius;
    printf("\nEnter temperature in celsius: ");
    scanf("%f", &temp_in_celsius);

    printf("\nTemperature in fahrenheit is: %f\n", convert_cel_to_fah(temp_in_celsius));
    return 0;
}

float convert_cel_to_fah(float c) {
    return ((c * 9)/5) + 32;
}