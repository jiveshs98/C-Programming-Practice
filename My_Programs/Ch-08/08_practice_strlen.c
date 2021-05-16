// strlen(string) -  Finding the length of string excluding the null character

# include <stdio.h>
# include <string.h>

int main() {

    char *st = "Jivesh";
    int length = strlen(st);
    printf("\nThe length of string is: %d\n", length);
    return 0;
}