#include <stdio.h>
#include <string.h>

struct employee{
    int empcode;
    float salary;
    char name[30];
};

int main(){
    struct employee facebook[100]; // for 100 employees

    // Details for employee #1
    facebook[0].empcode = 100;
    facebook[0].salary = 24.5;
    strcpy(facebook[0].name, "Jivesh Singh");

    // Details for employee #2
    facebook[1].empcode = 101;
    facebook[1].salary = 2.5;
    strcpy(facebook[1].name, "Rohan");

    // Details for employee #3
    facebook[2].empcode = 102;
    facebook[2].salary = 4.5;
    strcpy(facebook[2].name, "Priya Singhania");

    printf("done");

    printf("\n%s\n",facebook[0].name);
    printf("%s\n",facebook[1].name);
    printf("%s",facebook[2].name);
    
    return 0;
}