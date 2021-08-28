#include <stdio.h>
#include <string.h>

// Creating a structure
struct employee{
    int empcode;
    float salary;
    char name[20];
};


int main(){
    // Creating structure variable
    struct employee e1;

    e1.empcode = 100;
    e1.salary = 4.2;
    //e1.name = "Jivesh"; ---> This won't work!

    strcpy(e1.name, "Jivesh");


    // Printing structure values
    printf("\nEmployee code: %d", e1.empcode);
    printf("\nEmployee salary: %.3f", e1.salary);
    printf("\nEmployee name: %s", e1.name);

    return 0;
}