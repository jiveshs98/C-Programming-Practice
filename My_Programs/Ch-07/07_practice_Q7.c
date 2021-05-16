/*

This question is implemented in two ways:-

a. Using call by value
b. Using call by reference

*/

// Part A

#include <stdio.h>

void mulFun(int arr[], int num, int len);

int main(){
    int multiplicationArray[3][10];

    mulFun(multiplicationArray[0], 2, 10);
    mulFun(multiplicationArray[1], 7, 10);
    mulFun(multiplicationArray[2], 9, 10);

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


// Part B
/*
#include <stdio.h>

void mulFun(int *arr, int num, int len);

int main(){
    int multiplicationArray[3][10];

    mulFun(multiplicationArray[0], 2, 10);
    mulFun(multiplicationArray[1], 7, 10);
    mulFun(multiplicationArray[2], 9, 10);

    return 0;
}

void mulFun(int *arr, int num, int len){
    
    for(int i=0; i<len; i++){
        *(arr+i) = num * (i+1);
    }

    printf("\nThe multiplication table of %d is: \n", num);

    for(int i=0; i<len; i++){
        printf("\n%d X %d = %d", num, i+1, *(arr+i));
    }

    printf("\n\n***************************************************\n");
}
*/