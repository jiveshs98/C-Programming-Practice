// C Program to implement ternary operators/Conditional operators

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    (num < 5) ? printf("\n%d is less than 5.\n\n",num):printf("\n%d is greater than 5.\n\n",num);
    return 0;
}