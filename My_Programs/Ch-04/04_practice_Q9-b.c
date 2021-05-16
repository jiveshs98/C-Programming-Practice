// To find factorial of a number using do-while

#include <stdio.h>

int main(){
    int n, num, fact = 1;

    printf("\nEnter any no.: ");
    scanf("%d", &n);

    num = n;

    do{
        fact*=n;
        n--;
    }
    while(n>0);

    printf("\nFactorial of %d is: %d\n", num, fact);
    return 0;
}