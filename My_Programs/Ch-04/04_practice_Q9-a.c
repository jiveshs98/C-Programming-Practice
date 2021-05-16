// To find the factorial of a given no. using while loop

#include <stdio.h>

int main(){
    int n, num, fact = 1;

    printf("\nEnter any no.: ");
    scanf("%d", &n);
    num = n;
    
    while (n>0){
        fact*=n;
        n--;
    }

    printf("\nFactorial of %d is: %d\n", num, fact);
    return 0;
}