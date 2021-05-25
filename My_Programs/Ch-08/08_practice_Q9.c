// WAP to check whether a given character is present in a string or not.

#include <stdio.h>

void char_presence(char *str, char c);

int main(){
    char st[] = "Jivesh";
    char_presence(st,'v');
    return 0;
}

void char_presence(char *str, char c){
    char *ptr = str;

    while(*ptr!='\0'){
        if(*ptr == c){
            printf("\n%c is present in %s", c, str);
            break;
        }
        ptr++;
    }
}