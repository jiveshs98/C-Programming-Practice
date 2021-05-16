// Passing array to function

// Method 1
#include <stdio.h>

void printArray(int *ptr, int n);

int main(){
    int arr[] = {24,11,33,56,743,11};
    printArray(arr, 6);
    return 0;
}

void printArray(int *ptr, int n){
   for(int i = 0; i<n; i++){
       printf("Value of element %d: %d\n", i+1, *(ptr+i));
   } 
}