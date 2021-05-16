// To print the address of a variable and use this address to print the value

#include <stdio.h>

int main(){
    int a = 1, *j;

    printf("\nAddress of variable 'a' is : %p", (void*) &a);

    j = &a;

    printf("\nThe value stored at address %p is %d\n", (void*) j, *j);

    return 0;
}