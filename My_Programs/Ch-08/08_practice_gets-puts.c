// We can input multi-word string using gets()

// puts() is used to output a string. The cursor is placed in a new line.

#include <stdio.h>

int main(){
    char s[35];
    printf("\nEnter your name: ");
    gets(s);
    printf("\nMy name is %s.\n", s);
    return 0;
}