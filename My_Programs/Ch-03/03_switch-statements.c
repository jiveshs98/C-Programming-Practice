// C program to implement Switch Statements

#include <stdio.h>

int main(){
    int rating;
    printf("\nEnter rating (1-5): ");
    scanf("%d", &rating);

    switch (rating) {
        case 1:
            printf("\nYour rating is 1.\n\n");
            break;
        case 2:
            printf("\nYour rating is 2.\n\n");
            break;
        case 3:
            printf("\nYour rating is 3.\n\n");
            break;
        case 4:
            printf("\nYour rating is 4.\n\n");
            break;
        case 5:
            printf("\nYour rating is 5.\n\n");
            break;
        default:
            printf("\nInvalid Rating!!\n\n");
            break;
    }
}