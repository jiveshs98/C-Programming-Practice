// C Program to implement if-else

#include <stdio.h>

int main(){
    float marks;
    printf("\nEnter your marks out of 100: ");
    scanf("%f",&marks);
    //printf("%f",marks);

    if (marks>=90 && marks<=100){
        printf("\nGrade: A\n\n");
    }
    else if (marks>=80 && marks<90) {
        printf("\nGrade: B\n\n");
    }
    else if (marks>=70 && marks<80) {
        printf("\nGrade: C\n\n");
    }
    else if (marks>=60 && marks<70) {
        printf("\nGrade: D\n\n");
    }
    else if (marks>=50 && marks<60) {
        printf("\nGrade: E\n\n");
    }
    else if (marks<50) {
        printf("\nGrade: F\n\n");
    }
    else {
        printf("\nInvalid marks!!\n\n");
    }
    return 0;
}