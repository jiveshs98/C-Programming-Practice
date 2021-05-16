#include <stdio.h>

int main(){
    int a = 5;
    int *i, **j;

    i= &a;
    j= &i;

    printf("\nValue of variable 'a' is: %d\n", a);
    printf("\nAddress of variable 'a' is: %p\n", (void*) &a);

    printf("\nValue pointed by pointer 'i' is: %d\n", *i);
    printf("\nAddress stored in pointer i is: %p\n", (void*) i);
    printf("\nAddress of pointer 'i' is: %p\n", (void*) &i);

    printf("\nValue pointed by pointer 'j' is: %d\n", **j);
    printf("\nAddress stored in pointer 'j' is: %p\n", (void*) j);
    return 0;
}