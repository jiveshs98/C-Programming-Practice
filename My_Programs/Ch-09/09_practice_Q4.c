// WAP to illustrate the use of arrow operator in C

#include <stdio.h>

struct employee{
    int code;
    float salary;
};

int main(){
    struct employee e1, *ptr;

    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 34.2;

    printf("\nEmployee code: %d", e1.code);
    printf("\nEmployee salary: %.2f", e1.salary);
    return 0;
}