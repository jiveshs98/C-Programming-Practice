// To accept marks of five students in an array and print them to the screen

#include <stdio.h>

int main(){
    int marks[5];
    for(int a=0; a<5; a++){
        printf("\nEnter marks for Student %d: ", a+1);
        scanf("%d", &marks[a]);
    }

    printf("\nThe marks are:-\n");

    for(int i=0; i<5; i++){
        printf("\nStudent %d: %d\n", i+1, marks[i]);
    }
    return 0;
}