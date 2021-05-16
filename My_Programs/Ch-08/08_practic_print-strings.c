// Method # 1

/*
#include <stdio.h>

int main() {
    //char str[] = {'J', 'i', 'v', 'e', 's', 'h', '\0'}; 
    char str[] = "Jivesh";
    char *ptr = str;

    while (*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
*/

// Method # 2

#include <stdio.h>

int main() {
    //char str[] = "Jivesh Singh";
    //printf("%s", str);

    char *ptr = "Jivesh Singh";
    printf("%s\n", ptr);

    return 0;
}
