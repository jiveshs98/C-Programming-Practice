// WAP to encrypt a string by adding 1 to the ascii value of its characters.

#include <stdio.h>

void encrypt(char *c);

int main(){
    char c[] = "come to this room"; // Do not declare with char *c here as it would allocate to read-only memory, and thus we won't be able to change the characters.
    encrypt(c);
    printf("\nEncrypted string is: %s", c);
    return 0;
}

void encrypt(char *c) {
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}