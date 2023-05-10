#include <stdio.h>
#include <stdlib.h>

int main() {

    char character;

    printf("Enter a letter to be analyzed: ");
    scanf("%s", &character);

    if(character >= 65 && character <= 90)
        printf("%c is an uppercase character.\n", character);
    else if(character >= 97 && character <= 122)
        printf("%c is a lowercase character.\n", character);
    else if(character >= 48 && character <= 57)
        printf("%c is a digit.\n", character);
    else
        printf("%c is another type of character.\n", character);

    return 0;
}
