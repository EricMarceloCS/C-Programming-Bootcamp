#include <stdio.h>
#include <stdlib.h>

int main() {

    char arithmetic;
    int num1, num2;

    printf("Enter a mathmatical operator to execute: \n");
    scanf("%s", &arithmetic);

    printf("Enter two numbers to to evaluate: ");
    scanf("%d %d", &num1, &num2);

    if(arithmetic == '/' && num2 == 0)
        arithmetic = '!';

    switch(arithmetic) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        case '%':
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        default:
            printf("Error... Invalid Operation.\n");
    }

    return 0;
}
