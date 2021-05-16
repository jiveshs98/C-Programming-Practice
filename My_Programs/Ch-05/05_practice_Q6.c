// To calculate the sum of first n natural no.s using recursive function

#include <stdio.h>

int sum_natural(int n);

int main() {
    int n;

    printf("\nEnter value of n: ");
    scanf("%d", &n);

    printf("\nThe sum of first %d natural number(s) is: %d\n", n, sum_natural(n));

    return 0;
}

int sum_natural(int n) {
    if (n == 1){
        return 1;
    }

    else{
        return n + sum_natural(n-1);
    }
}