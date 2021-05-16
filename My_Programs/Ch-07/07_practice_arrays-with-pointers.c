// To implement arrays using pointer

#include <stdio.h>

int main() {
    int marks[4];
    int *ptr;

    //ptr = &marks[0];

    ptr = marks; // This will show the same result as the above comment.

    for(int i = 0; i<4; i++){
        printf("\nEnter the marks for Student %d: ", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for(int i = 0; i<4; i++){
        printf("\nMarks for Student %d: %d\n", i+1, marks[i]);
    }
    return 0;
}