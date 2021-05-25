// WAP to count the occurrence of a given character in a string

#include <stdio.h>

int occurence(char st[], char c);

int main(){
    char st[] = "Jivvesh";
    int count = occurence(st,'v');
    printf("\nOccurrences: %d", count);
    return 0;
}

int occurence(char st[], char c){
    char *ptr = st;
    int count = 0;

    while(*ptr!='\0'){
        if(*ptr == c){
            count++;
        }
        ptr++;
    }

    return count;
}