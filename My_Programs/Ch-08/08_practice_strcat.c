// strcat(s1,s2) - To concatenate two strings. s1 gets updated.

#include <stdio.h>
#include <string.h>

int main() {
    char st1[40] = "Hello";
    char st2[] = "World";

    printf("\nst1 before concatenation: %s\n", st1);

    strcat(st1, st2);

    printf("\nst1 after concatenation: %s\n", st1);
}