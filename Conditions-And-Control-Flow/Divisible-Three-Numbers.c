#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, num3;

    printf("Enter three numbers to check divisibility: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num2 % num1 == 0 && num3 % num1 == 0)
        printf("Divisible\n");
    else if (num3 % num2 ==0 && num1 % num2 == 0)
        printf("Divisible\n");
    else if(num1 % num3 == 0 && num2 % num3 == 0)
        printf("Divisible\n");
    else
        printf("Not Divisible\n");

    return 0;
}
