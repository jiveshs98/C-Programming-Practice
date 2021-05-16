// To print multiplication table of a given no. n

#include <stdio.h>

int main(){
    int num;
    printf("\nEnter any no.: ");
    scanf("%d", &num);

    for (int i=1; i<=10; i++){
        printf("%d x %d = %d\n", num,i,num*i);
    }
    return 0;
}