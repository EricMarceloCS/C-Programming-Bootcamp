#include <stdio.h>

void getSequenceNum1Num2(int total, int num1, int num2) {


    if(total > 1) {
        num1 = num1 % 10 + num1 * 10;
        num2 = num2 % 10 + num2 * 10;
        getSequenceNum1Num2(total - 1, num1, num2);
    } else {
        printf("%d%d\n", num1, num2);
    }

}

int main() {
    int total, num1, num2;
    int result;

    printf("Enter the total number of repeated values: ");
    scanf("%d", &total);
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    getSequenceNum1Num2(total, num1, num2);

    return 0;
}
