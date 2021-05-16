// To calculate the nth element of a Fibonacci series

int fibonacci(int n);

#include <stdio.h>

int main(){
    int num;
    printf("\nEnter the position of element: ");
    scanf("%d", &num);

    printf("\nThe %dth element in the Fibonacci series is: %d\n", num, fibonacci(num));

    return 0;
}

int fibonacci(int n) {
    if(n == 1){
        return 0;
    }

    else if(n == 2){
        return 1;
    }

    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}