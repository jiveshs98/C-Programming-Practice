#include<stdio.h>

int main(){
    int a =3;
    printf("%d %d %d\n", a, ++a, a++); // Output: 5, 5, 3; accessing from right to left
    return 0;
}