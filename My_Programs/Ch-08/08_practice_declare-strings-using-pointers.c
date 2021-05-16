/*

You can declare strings using char str[] = "name", but you will not be able to re-initialise it.

So, we can use pointers for that.

*/

#include <stdio.h>

int main() {
    char *ptr = "Jivesh Singh";
    ptr = "Urvi";

    puts(ptr);
    return 0;
}