#include <stdio.h>

struct employee{
    int empcode;
    float salary;
    char name[30];
};

int main(){
    struct employee jivesh = {100, 30.56, "Jivesh Singh"};

    printf("\nName is: %s", jivesh.name);
    printf("\nEmployee Code is: %d", jivesh.empcode);
    printf("\nSalary is: %.2f", jivesh.salary);

    // We can initialise all the structure values to 0.
    struct employee harry = {0};

    printf("\nName is: %s", harry.name);
    printf("\nEmployee Code is: %d", harry.empcode);
    printf("\nSalary is: %.2f", harry.salary);
    return 0;
}