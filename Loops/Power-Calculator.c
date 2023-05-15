#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2;
    int count = 0;
    int total = 1;

    printf("Enter the base number ");
    scanf("%d", &num1);
    printf("Enter the exponential power: ");
    scanf("%d", &num2);

     while(count < num2){
            total *= num1;
            count++;
    }
    printf("%d^%d = %d\n", num1, num2, total);

    return 0;
}
