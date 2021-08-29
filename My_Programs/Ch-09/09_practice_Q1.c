// WAP to create a 2-D vector using structures

#include <stdio.h>

struct vector{
    float Xdim;
    float Ydim;
};

int main(){
    struct vector v1;
    v1.Xdim = 31;
    v1.Ydim = 200;

    printf("\nX dimension of vector: %.3f", v1.Xdim);
    printf("\nY dimension of vector: %.3f", v1.Ydim);
    return 0;
}