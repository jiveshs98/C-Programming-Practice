// Using typedef in structures

// typedef is a keyword that is used to provide custom names for datatypes in C. It is more commonly used for structures

#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
} emp;

int main(){
    emp e1;
    struct  employee *ptr; // This is still valid.
    
    ptr = &e1;

    ptr -> code = 101;
    ptr -> salary = 32.4;
    strcpy(ptr->name, "Jivesh Singh");

    printf("Employee code: %d", e1.code);
    printf("\nEmployee salary: %.2f", e1.salary);
    printf("\nEmployee name: %s", e1.name);

    return 0;
}