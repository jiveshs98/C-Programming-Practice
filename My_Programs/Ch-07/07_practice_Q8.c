#include <stdio.h>

void mulFun(int arr[], int num, int len);

int main(){
    int num_of_tables, table[10];

    printf("\nHow many tables you want? Please pick a number from 1 to 10:\n");
    scanf("%d", &num_of_tables);
    
    if (num_of_tables<=10){
        int multiplicationArray[num_of_tables][10];

        for (int i=0; i<num_of_tables;i++){
            printf("\nWhich multiplication table for row %d: ", i+1);
            scanf("%d", &table[i]);
        }

        for (int j=0; j<num_of_tables; j++){
            mulFun(multiplicationArray[j], table[j], 10);
        }
    }
    
    else{
        printf("\nInvalid input\n");
    }

    return 0;
}

void mulFun(int arr[], int num, int len){
    
    for(int i=0; i<len; i++){
        arr[i] = num * (i+1);
    }

    printf("\nThe multiplication table of %d is: \n", num);

    for(int i=0; i<len; i++){
        printf("\n%d X %d = %d", num, i+1, arr[i]);
    }

    printf("\n\n***************************************************\n");
}