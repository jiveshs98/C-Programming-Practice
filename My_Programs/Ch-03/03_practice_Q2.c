
#include <stdio.h>

int main(){
    int physics, chemistry, maths;
    float total;
    
    printf("\nEnter Physics Marks: ");
    scanf("%d", &physics);
    printf("\nEnter Chemistry Marks: ");
    scanf("%d", &chemistry);
    printf("\nEnter Maths Marks: ");
    scanf("%d", &maths);

    // Assuming marks are out of 100
    total = (physics + chemistry + maths) / 3;

    if (total<40 || physics<33 || chemistry<33 || maths<33){
        printf("\nYour total marks are %f and you have failed.\n", total);
    }

    else{
        printf("\nYour total marks are %f and you have passed.\n", total);
    }

    
    return 0;
}