#include <stdio.h>
#include <stdlib.h>


char toLower(char letter) {

    if(letter >= 'A' && letter <= 'Z')
        return letter - 'A' + 'a';
    else
        return -1;
}

char toUpper(char letter) {

    if(letter >= 'a' && letter <= 'z')
        return letter - 'a' + 'A';
    else
        return -1;
}

int main() {

    char letter, result;

    printf("Enter an uppercase character: ");
    scanf("%s", &letter);
    result = toLower(letter);
    if(result == -1) {
        printf("The character entered was invalid.\n");
    } else {
        printf("%c in lowercase: %c\n", letter, result);
    }

    printf("Enter an lowercase character: ");
    scanf("%s", &letter);
    result = toUpper(letter);
    if(result == -1) {
        printf("The character entered was invalid.\n");
    } else {
         printf("%c in uppercase: %c\n", letter, result);
    }


    return 0;
}
