#include <stdio.h>

void printChar1Char2x2(int total, char char1, char char2) {

    if(total > 0) {
        printf("%c", char1);
        printChar1Char2x2(total - 1, char1, char2);
        printf("%c%c", char2, char2);
    }
}

int main() {
    int total;
    char char1;
    char char2;

    printf("Enter the number of sequence values: ");
    scanf("%d", &total);

    printf("Enter the characters: ");
    scanf(" %c", &char1);
    getchar();
    printf("Enter the second character: ");
    scanf(" %c", &char2);
    getchar();

    printChar1Char2x2(total, char1, char2);
    printf("\n");

    return 0;
}
