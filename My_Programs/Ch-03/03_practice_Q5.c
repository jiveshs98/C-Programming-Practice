// C program to check whether a given character is lowercase or not.
// ASCII Values -> 97-122 = a-z

#include <stdio.h>

int main(){
    char ch;
    printf("\nEnter any character: ");
    scanf("%c", &ch);

    if (ch>=97 && ch<=122){
        printf("\nIt is lowercase.\n");
    }

    else {
        printf("\nIt is not lowercase.\n");
    }
    return 0;
}