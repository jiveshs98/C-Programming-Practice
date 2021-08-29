#include <stdio.h>

struct complex{
    int real, img;
};

int main(){
    struct complex c1;
    c1.real = 22;
    c1.img = 6;

    printf("\nComplex number is: %d + %di", c1.real, c1.img);
    return 0;
}