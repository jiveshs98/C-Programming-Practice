// WAP to print first n natural no.s using for loop

#include <stdio.h>

int main(){
    int n=0;
    printf("\nEnter value of n: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        printf("%d\n",i);
    }
    return 0;
}