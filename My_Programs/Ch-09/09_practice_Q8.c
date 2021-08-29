#include <stdio.h>
#include <string.h>

struct bank{
    long int accountNo;
    double balance;
    char name[30], bankName[30];
};

void display(struct bank b);

int main(){
    struct bank c1;

    c1.accountNo = 159357;
    c1.balance = 60000.29;
    strcpy(c1.name, "Jivesh Singh");
    strcpy(c1.bankName, "ICICI Bank");

    display(c1);
    return 0;
}

void display(struct bank b){
    printf("\nCustomer Name: %s", b.name);
    printf("\nBank: %s", b.bankName);
    printf("\nAccount No.: %li", b.accountNo);
    printf("\nBalance: %lf", b.balance);
}