#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;

    printf("\nValue at address stored in pointer: %d\n", *ptr);

    printf("\nValue of array's first element: %d\n", arr[0]);

    printf("\nValue return by pointer arithmetic (ptr + 2) is: %d\n", *(ptr+2));

    printf("\nValue of array's third element is: %d\n", arr[2]);

    return 0;
}