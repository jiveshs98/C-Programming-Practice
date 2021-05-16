// To print sum of first 10 natural numbers using do-while loop

#include <stdio.h>

int main(){
    int n=1, s=0;

    do{
        s+=n;
        n++;
    }
    while(n<=10);

    printf("\nThe sum of first 10 natural no.s is: %d\n", s);
    return 0;
}