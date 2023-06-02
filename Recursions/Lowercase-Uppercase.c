#include <stdio.h>

void printLowercaseUppercase(int total, char char1) {

    if(total >  0){
        printf("%c", char1);
        printLowercaseUppercase(total - 1, char1);
        printf("%c", char1 - 'a' + 'A');
    }
}

int main() {
    int total;
    char char1;

    printf("Enter the sequence size: ");
    scanf("%d", &total);

    printf("Enter the character: ");
    scanf(" %c", &char1);
    getchar();

    printLowercaseUppercase(total, char1);

    return 0;
}
