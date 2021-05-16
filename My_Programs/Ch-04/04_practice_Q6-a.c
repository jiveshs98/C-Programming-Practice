// To print sum of first 10 natural numbers using for loop

#include <stdio.h>

int main(){
    int s=0;

    for(int i=1; i<=10; i++){
        s+=i;
    }

    printf("\nThe sum of first 10 natural no.s is: %d\n", s);

    return 0;
}