// WAP to decrypt a string that is encrypted using the encrypt() in question 6

#include <stdio.h>

void decrypt(char *c);

int main(){
    char c[] = "dpnf!up!uijt!sppn"; // Do not declare with char *c here as it would allocate to read-only memory, and thus we won't be able to change the characters.
    decrypt(c);
    printf("\nDecrypted string is: %s", c);
    return 0;
}

void decrypt(char *c) {
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}