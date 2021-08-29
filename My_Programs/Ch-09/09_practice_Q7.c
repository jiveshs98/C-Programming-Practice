#include <stdio.h>

typedef struct complex{
    int real, img;
} comp;

int main(){
    comp c1;
    c1.real = 22;
    c1.img = 6;

    printf("\nComplex number is: %d + %di", c1.real, c1.img);
    return 0;
}