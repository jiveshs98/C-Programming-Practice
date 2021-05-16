#include <stdio.h>

// Function Prototype Here
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    // Function Calling Here
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}

// Function Definition Here
void goodMorning(){
    printf("\nGood Morning\n");
}

void goodAfternoon(){
    printf("\nGood Afternoon\n");
}

void goodNight(){
    printf("\nGood Night\n");
}