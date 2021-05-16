// To print a pattern using functions with n no. of lines
// a.) Recursive

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
    if (n == 1){
        printf("*\n");
        return;
    }

    else{
        
        printPattern(n-1);

        for(int i=0; i < (2*n-1); i++){
            printf("*");
        }
        printf("\n");
    }
    
}