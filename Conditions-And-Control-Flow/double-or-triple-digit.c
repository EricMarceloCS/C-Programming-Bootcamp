#include <stdio.h>
#include <stdlib.h>

int main() {

    int inputNumber;

    printf("Enter a number to evaluate for double or triple digit: ");
    scanf("%d", &inputNumber);

    if(inputNumber > 99 && inputNumber <= 999)
        printf("triple-digit\n");
    else if (inputNumber > 9 && inputNumber <= 99)
        printf("double-digit\n");
    else
        printf("neither double/triple\n");

    return 0;
}
