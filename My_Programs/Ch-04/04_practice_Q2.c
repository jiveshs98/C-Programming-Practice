// To print the multiplication table of 10 in reverse order

#include <stdio.h>

int main(){
    int i, n=10;

    for (i=10;i>0;i--){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}