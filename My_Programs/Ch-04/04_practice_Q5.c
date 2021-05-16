// To print sum of first 10 natural numbers using while loop

#include <stdio.h>

int main(){
    int n=1, s = 0;

    while (n<=10){
        s+=n;
        n++;
    }
    printf("\nThe sum of first 10 natural numbers is: %d\n", s);
    return 0;
}