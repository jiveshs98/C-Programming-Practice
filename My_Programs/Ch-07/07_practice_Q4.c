// To create an array of 10 integers and store multiplication table of any number given by the user.

#include <stdio.h>

int main(){
    int arr[10];
    int num;

    printf("\nEnter any number: ");
    scanf("%d", &num);

    for(int i=0; i<10; i++){
        arr[i] = num*(i+1);
    }

    printf("\n");
    
    for(int j=0; j<10; j++){
        printf("%d ", arr[j]);
    }

    printf("\n");
}