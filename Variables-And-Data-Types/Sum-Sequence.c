#include <stdio.h>

// result = Sn = (a1 + an) * (n / 2)

int main() {

    float a1, an;
    float diff;
    int n;
    float result;

    printf("Enter the initial term value: ");
    scanf("%f", &a1);

    printf("Enter the difference between terms: ");
    scanf("%f", &diff);

    printf("Enter the nth term number: ");
    scanf("%d", &n);

    an = a1 + (n - 1) * diff;

    result = (a1 + an) * (n / 2);
    printf("Sum: %f", result);


    return 0;
}
