// Write your own version of strlen function

#include <stdio.h>

int strlen(char* st);

int main(){
    char st[] = "Jivesh";
    int l = strlen(st);
    printf("\nThe length of the string is %d.\n", l);
    return 0;
}

int strlen(char* st){
    char *ptr = st;
    int len = 0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}