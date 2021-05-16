// To print first n natural no.s in reverse order

#include <stdio.h>

int main(){
    int n=0;
    printf("\nEnter value of n: ");
    scanf("%d",&n);

    for (int i=n; i>0; i--){
        printf("%d\n",i);
    }
    return 0;
}