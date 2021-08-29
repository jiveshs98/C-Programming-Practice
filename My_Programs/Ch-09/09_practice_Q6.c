#include <stdio.h>

struct complex{
    int real, img;
};

struct complex display(struct complex c); //Function Prototype

int main(){
    struct complex comp[5];

    for(int i=0; i<5; i++){
        printf("\nEnter real part for c%d: ", i+1);
        scanf("%d",&comp[i].real);
        printf("\nEnter imaginary part for c%d: ", i+1);
        scanf("%d", &comp[i].img);
    }

    for(int j=0; j<5; j++){
        printf("\n\nComplex No. %d: ", j+1);
        display(comp[j]);
    }
    return 0;
}

struct complex display(struct complex c){
    printf("%d + %di", c.real, c.img);
}