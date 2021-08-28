// Passing structures to functions

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp);

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 101;
    ptr->salary= 17.2;
    strcpy(ptr->name, "Jivesh Singh");

    show(e1);

    printf("Employee Code: %d\n", e1.code); // The value doesn't change.
    // This shows that only a copy of structure is passed to the function, hence the original structure remains unchanged.
    return 0;
}

void show(struct employee emp){
    printf("Employee Code: %d\n", emp.code);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

    emp.code = 201; // We try to modify the employee code in the function.
}