#include <stdio.h>
#include <string.h>

struct employee{
    int empcode;
    float salary;
    char name[30];
};

int main(){
    struct employee e1;
    struct employee *ptr;
    
    ptr = &e1;
    (*ptr).empcode = 100; // paranthesis is important due to operator precedence
    printf("%d", e1.empcode);

    // We can also use arrow operator (->)
    ptr->salary = 34.5;
    printf("\n%.3f", e1.salary);


    strcpy(ptr->name, "Jivesh Singh");
    printf("\n%s", e1.name);

    return 0;
}