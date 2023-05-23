#include <stdio.h>

void findMinMax(int num1, int num2, int *pMin, int *pMax) {

    if(num1 > num2) {
        *pMax = num1;
        *pMin = num2;
    } else {
        *pMax = num2;
        *pMin = num1;
    }
}

int main() {

    int a = 5, b = 7;
    int min, max;

    findMinMax(a, b, &min, &max);
    printf("Max between %d and %d = %d\n", a, b, max);
    printf("Min between %d and %d = %d\n", a, b, min);

    return 0;
}
