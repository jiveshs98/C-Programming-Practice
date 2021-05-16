// To print factorial of a given number using for loop

#include <stdio.h>

int main(){
    int n,fact=1;
    printf("Enter any no.: ");
    scanf("%d", &n);

    for(int i=n; i>0; i--){
        fact*=i;
    }

    printf("\nFactorial of %d is: %d\n", n, fact);
    return 0;
}