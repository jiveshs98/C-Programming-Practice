#include <stdio.h>
#include <stdlib.h> // For rand(), otherwise warning.
#include <time.h>   // For time(), otherwise warning.

int main(){
    int number, guess, num_guesses=1;
    srand(time(0)); // To get a different no. everytime
    number = rand() % 100 + 1; // To generate the random number b/w 1-100
    
    //printf("\nThe no. is %d\n", number);

    do{
        printf("\nEnter the number between 1-100: ");
        scanf("%d", &guess);

        if (guess > number){
            printf("\nPlease enter a lower number!\n");
        }

        else if (guess < number){
            printf("\nPlease enter a higher number!\n");
        }

        else{
            printf("\nYou guessed the correct number in %d attempt(s)\n", num_guesses);
        }

        num_guesses++;
    }
    while (guess!=number);
    return 0;
}