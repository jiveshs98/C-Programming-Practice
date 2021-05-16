// WAP to print the first n natural no.s using do-while.

#include <stdio.h>

int main(){
    int n, a=1;
    printf("\nGive the value of n: ");
    scanf("%d", &n);

    do {
        printf("%d\n", a);
        a++;
    } while(a<=n);

    return 0;
}