// To check whether or not a no. is a prime number using do-while loop

#include <stdio.h>

int main(){
    int num, n, prime = 1;
    printf("\nEnter any no.: ");
    scanf("%d", &num);

    n = num;

    do{
        if (num == n){
            n--;
            continue;
        }

        else if (num % n == 0){
            prime = 0;
            break;
        }
        n--;
    }
    while(n>2);

    if (prime){
        printf("\n%d is a prime number.\n", num);
    }
    else{
        printf("\n%d is not a prime number.\n", num);
    }
    return 0;
}