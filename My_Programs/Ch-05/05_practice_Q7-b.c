// To print a pattern using functions with n no. of lines
// b.) Iterative

// Pattern:-
// *
// ***
// *****

#include <stdio.h>

void printPattern(int n);

int main(){
    int n;
    printf("\nEnter no. of lines: ");
    scanf("%d", &n);
    printf("\n"); // To start pattern after a newline

    printPattern(n);

    return 0;
}

void printPattern(int n) {
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(2*i-1); j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}