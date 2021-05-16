// To find factorial of a given number using recursion

int factorial(int n);

#include <stdio.h>

int main(){
    int num, res;
    printf("\nEnter any number: ");
    scanf("%d",&num);

    res = factorial(num);

    printf("\nThe factorial of %d is: %d\n", num, res);
    return 0;
}

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }

    else{
        return n * factorial(n-1);
    }
}