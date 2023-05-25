#include <stdio.h>

void printName(char *pArray) {

    char c = pArray[0];
    int i = 0;
    while(c != '\0') {
        printf("%c", c);
        c = pArray[++i];
    }
}

int main() {

    char firstname[] = "Brad";
    char lastname[] = "Pitt";

    printName(&firstname);
    printf(" ");
    printName(&lastname);
    printf("\n");

    return 0;
}
