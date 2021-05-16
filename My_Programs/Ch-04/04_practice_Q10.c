// To check whether or not a no. is a prime number using for loop

#include <stdio.h>

int main(){
    int num, prime = 1;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for(int i = 2; i<num; i++){
        if (num%i == 0){
            prime = 0;
            break;
        }
    }

    if (prime){
        printf("\n%d is a prime number.\n", num);
    }
    else{
        printf("\n%d is not a prime number.\n", num);
    }
}