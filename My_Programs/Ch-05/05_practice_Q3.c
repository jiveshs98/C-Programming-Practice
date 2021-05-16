// To calculate force of attraction on a body of mass m exerted by earth
// F = m * g ; g = 9.8 m/s2

#include <stdio.h>

float force(float x);

int main(){
    float mass;
    printf("\nEnter mass in kg: ");
    scanf("%f", &mass);
    printf("\nForce is: %f N\n", force(mass));
    return 0;
}

float force(float x){
    return x * 9.8;
}