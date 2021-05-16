// To print the sum of numbers occuring in the multiplication table of 8

#include <stdio.h>

int main(){
    int n=8, s=0;

    for (int i=1; i<=10; i++){
        s+= n*i;
    }

    printf("\nThe sum of no.s in multiplication table of 8 is: %d\n", s);

    return 0;
}