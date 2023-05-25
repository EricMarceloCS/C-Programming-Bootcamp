#include <stdio.h>

int getLength(char *pString) {
    int length = 0;
    int i = 0;
    char c = pString[0];
    while(c != '\0') {
        length++;
        c = pString[++i];
    }

    return length;
}

int main() {

    int length;
    char input[20];

    puts("Enter a string to see its length: ");
    gets(input);

    length = getLength(&input);
    printf("Length: of %s is %d.\n", input, length );
    return 0;
}
