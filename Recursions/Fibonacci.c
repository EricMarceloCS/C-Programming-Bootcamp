#include <stdio.h>

int fibonacci(int n) {

    if(n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int result;
    int index;

    printf("Enter the index of the fibonacci result: ");
    scanf("%d", &index);

    result = fibonacci(index);

    printf("Fibonacci result: %d\n", result);
    return 0;
}
