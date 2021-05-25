// Write your own version of strcpy function from <string.h>

#include <stdio.h>

void strcopy(char* target, char* source);

int main(){
    char src[] = "Jivesh";
    char tar[20];
    strcopy(tar, src);
    printf("\nValue of tar is: %s", tar);
       
    return 0;
}

void strcopy(char* target, char* source){
    int i=0;
    while(source[i]!='\0'){
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}