#include <stdio.h>
#include <stdlib.h>

int getInteger(char letter1, char letter2, char letter3) {

    int number = 0;
    if((letter1 >= '0' && letter1 <= '9')
        && (letter2 >= '0' && letter2 <= '9')
        && (letter3 >= '0' && letter3 <='9')){

        number = (letter1 - '0') * 100;
        number += (letter2 - '0') * 10;
        number += letter3 - '0';
    } else {
        number = -1;
    }

    return number;

}

int main() {

    char letter1;
    char letter2;
    char letter3;
    int result = 0;

    printf("Enter three numerical characters: ");
    scanf("%c %c %c", &letter1, &letter2, &letter3);

    result = getInteger(letter1, letter2, letter3);

    printf("Characters '%c' '%c' '%c' make %d\n", letter1, letter2, letter3, result);

    return 0;
}
