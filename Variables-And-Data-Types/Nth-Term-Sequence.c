#include <stdio.h>

int main() {

    float a1;
    float diff;
    int n;
    float result;

    printf("Enter the inital term value: ");
    scanf("%f", &a1);

     printf("Enter the difference between terms: ");
    scanf("%f", &diff);

    printf("Enter nth term to calculate: ");
    scanf("%d", &n);

    result = a1 + (n - 1) * diff;
    printf("Result: %f", result);

    return 0;
}
