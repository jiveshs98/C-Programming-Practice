// To count positive integers in an array

#include <stdio.h>

int main(){
    int arr[] = {-1, 2, -3, -4, -5, 6};
    int count = 0;
    for (int i=0; i<6; i++){
        if (arr[i] > 0){
            count+=1;
        }
    }

    printf("\nNo. of positive integers are: %d\n", count);
    return 0;
}