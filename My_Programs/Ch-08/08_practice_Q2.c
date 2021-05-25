// WAP to take string as an input from the user using %c and %s. Confirm that the strings are equal.

#include <stdio.h>
#include <string.h>
int main(){
    char st1[30];
    char st2[30];
    char c;
    int i=0;

    printf("\nEnter the value of first string: ");
    scanf("%s", st1);

    printf("\nEnter the second string character by character:\n");

    while(c!='\n'){
        fflush(stdin);  // Flushing stdin to prevent storing \n from previous scanf into c. It will also flush previous input, so we would have to enter the string character-by-character.
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }

    st2[i-1] = '\0';    // Replacing the '\n' with '\0' at the end of string 2

    printf("\nThe value of first string is: %s", st1);
    printf("\nThe value of second string is: %s", st2);

    // Comparing the strings
    printf("\nstrcmp for these strings returns %d", strcmp(st1, st2));

    return 0;
}