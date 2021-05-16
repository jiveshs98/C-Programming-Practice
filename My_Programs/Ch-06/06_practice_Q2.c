#include <stdio.h>
void myfunc(int a);

int main(){
    int i = 5;
    printf("\nAddress of variable 'i' is: %p\n", (void*) &i);
    myfunc(i);
    return 0;
}

void myfunc(int a){
    printf("\nFunction Begins\n");
    printf("\nAddress of variable 'a' is: %p\n", (void*) &a);
}