#include <stdio.h>

struct vector{
    float Xdim;
    float Ydim;
};

struct vector sumVector(struct vector vec1, struct vector vec2); //Function Prototype

int main(){
    struct vector v1;
    struct vector v2;
    struct vector result;
    
    // First Vector
    v1.Xdim = 31;
    v1.Ydim = 200;

    // Second Vector
    v2.Xdim = 100;
    v2.Ydim = 50;

    result = sumVector(v1, v2);

    printf("\nXdim is %.3f and Ydim is %.3f", result.Xdim, result.Ydim);

}

struct vector sumVector(struct vector vec1, struct vector vec2){
    struct vector resultVector;
    resultVector.Xdim = vec1.Xdim + vec2.Xdim;
    resultVector.Ydim = vec1.Ydim + vec2.Ydim;
    return resultVector;
}
