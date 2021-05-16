// strcpy(target, source) - It is used to copy the content of second string into the first string. Target string should have the capacity to store the source string.

#include <stdio.h>
#include <string.h>

int main() {
    char *st = "Keep Calm And Carry On";
    char st2[100];

    strcpy(st2, st);

    printf("\nContent of st2 is: %s\n", st2);
    return 0;
}