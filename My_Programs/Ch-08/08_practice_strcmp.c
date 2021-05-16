// strcmp(st1, st2) - To compare two strings

// 0 - If both strings are equal.

// Negative value - If the ASCII value of the first string's mismatching character is not greater than that of the second string.

// Positive value - Otherwise.

#include <stdio.h>
#include <string.h>

int main() {
    char *st1 = "Hello";
    char *st2 = "World";

    int res = strcmp(st1, st2);

    printf("\nThe result is: %d\n", res);

    return 0;
}