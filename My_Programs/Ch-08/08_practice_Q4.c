/*
- Write a function slice() to slice a string.
- It should change the original string such that it is now the sliced string.
- Take m and n as the starting and ending positions for slice.
*/

#include <stdio.h>

void slice(char* str, int m, int n);

int main(){
    char st[] = "Jivesh";
    slice(st, 1, 4);
    printf("The result is: %s", st);

    char st2[] = "Croissant";
    slice(st2, 2, 6);
    printf("\nThe result is: %s", st2);
    return 0;
}

void slice(char* str, int m, int n){
    int i=0;

    while(i+m < n){
        str[i] = str[i+m];
        i++;
    }

    str[i] = '\0';
}