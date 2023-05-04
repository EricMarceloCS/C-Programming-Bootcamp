#include <stdio.h>

int main() {

    int grade1;
    int grade2;
    int grade3;

    printf("Enter first grade: ");
    scanf("%d", &grade1);
    printf("Enter second grade: ");
    scanf("%d", &grade2);
    printf("Enter third grade: ");
    scanf("%d", &grade3);

    double average;
    average = (double)(grade1 + grade2 + grade3)/3;
    printf("Average: %.2lf", average);

    return 0;
}
