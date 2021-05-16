// Passing array to function

// Method 2

#include <stdio.h>

void printArray(int arr[], int n);

int main(){
    int arr[] = {24,11,33,56,743,11};
    printArray(arr, 6);
    printf("\narr[2]: %d\n", arr[2]);
    return 0;
}

void printArray(int arr[], int n){
   for(int i = 0; i<n; i++){
       printf("Value of element %d: %d\n", i+1, arr[i]);
   }

   arr[2] = 5555; // This value is updated in main() as well.
}