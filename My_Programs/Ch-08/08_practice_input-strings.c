// Input any string

/*

Note:-

1. scanf automatically adds the null character ('\0') when the enter key is pressed.
2. The string should be short enough to fit into the array.
3. scanf cannot be used to input multi-word strings containing spaces.
4. Use gets() and puts() to do that.

*/

#include <stdio.h>

int main(){
    char s[35];
    printf("\nEnter your name: ");
    scanf("%s", s);
    printf("\nMy name is %s.\n", s);
    return 0;
}