// Write a program to check whether a given number is divisible by 97 or not

#include <stdio.h>

int main(){

    // If the answer is 0, then divisible.
    // Otherwise, not divisible.

    int num;
    printf("\nEnter any no.: ");
    scanf("%d", &num);
    printf("\nThe result of divisibility test is: %d\n\n", num%97);
    return 0;
}