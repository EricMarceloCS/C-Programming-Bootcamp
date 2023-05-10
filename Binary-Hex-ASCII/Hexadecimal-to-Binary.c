#include <stdio.h>
#include <stdlib.h>

int main(){

    char character;

    printf("Enter a character to convert to binary: ");
    scanf("%x", &character);

    printf("Character %c: 0b%b\n", character, character);

    return 0;
}
