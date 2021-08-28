#include <stdio.h>
#include <string.h>

struct employee{
    int empcode;
    float salary;
    char name[30];
};

int main(){
    struct employee e1, e2, e3;

    printf("\nEnter name for e1: ");
    gets(e1.name);
    puts(e1.name);
    printf("\nEnter salary for e1: ");
    scanf("%f", &e1.salary);
    printf("\nEnter employee code for e1: ");
    scanf("%d", &e1.empcode);

    printf("\n=======================\n");

    fflush(stdin);  // flushing out previous input, otherwise, this will be skipped
    printf("\nEnter name for e2: ");
    gets(e2.name);
    printf("\nEnter salary for e2: ");
    scanf("%f", &e2.salary);
    printf("\nEnter employee code for e2: ");
    scanf("%d", &e2.empcode);

    printf("\n=======================\n");

    fflush(stdin); // flushing out previous input, otherwise, this will be skipped
    printf("\nEnter name for e3: ");
    gets(e3.name);
    printf("\nEnter salary for e3: ");
    scanf("%f", &e3.salary);
    printf("\nEnter employee code for e3: ");
    scanf("%d", &e3.empcode);
    return 0;
}