// To create a display function to print the content of 2-d array on the screen.

#include <stdio.h>

void display(int r, int c, int a[][c]);

int main(){
    int arr[][2] = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}};

    display(5, 2, arr);
    return 0;
}

void display(int r, int c, int a[][c]){
    printf("\nThe array is:\n\n");
    printf("{\n");
    for (int i=0; i<r; i++){
        printf(" {");
        for(int j=0; j<c; j++){
            printf(" %d ",a[i][j]);
        }
        printf("}\n");
    }
    printf("}\n\n");
}