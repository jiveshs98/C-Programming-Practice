#include <stdio.h>

void fun(int *a);

int main(){
    int n;
    printf("\nEnter any no.: ");
    scanf("%d", &n);
    fun(&n); // Call by reference changes the value of original variable
    printf("\nThe result is: %d\n", n);
    return 0;
}

void fun(int *a){
    *a = *a * 10;
}