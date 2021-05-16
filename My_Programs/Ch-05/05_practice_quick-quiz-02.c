// To find the area of square using library functions

#include <stdio.h>
#include <math.h>

int main(){
    int side;
    printf("\nEnter the side of square: ");
    scanf("%d", &side);

    printf("\nThe area of square is: %f\n", pow(side, 2));
    return 0;
}