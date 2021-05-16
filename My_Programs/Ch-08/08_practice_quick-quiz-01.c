// Create a string using "" and print its contents using a loop.

#include <stdio.h>

int main() {
    char str[] = "Jivesh";
    char *ptr = str;

    printf("\n");

    while (*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");
    return 0;
}