#include <stdio.h>

int main(){
    int num_of_students = 3, num_of_subjects = 5;
    int marks[3][5];

    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            printf("\nEnter marks of student %d for subject %d: ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            printf("\nMarks of student %d for subject %d: %d\n", i+1, j+1, marks[i][j]);
        }
    }
    return 0;
}