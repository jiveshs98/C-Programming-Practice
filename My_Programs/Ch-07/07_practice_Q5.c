// To reverse a given array

#include <stdio.h>

void reverse_arr(int *ptr,int length);

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    printf("\nArray before reverse:\n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    reverse_arr(arr, 5);

    printf("\nArray after reverse:\n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverse_arr(int *arr,int length){
    int temp;

    for(int i=0; i<(length/2); i++){
        temp = arr[i];
        arr[i] = arr[length-i-1];
        arr[length-i-1] = temp;
    }
}