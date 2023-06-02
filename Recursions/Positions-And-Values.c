#include <stdio.h>

int getPositionAndValue(int n) {
    int even, odd;

    even = n % 10;
    n = n / 10;

    if(even % 2 != 0) {
        return 0;
    }

    if( n == 0) {
        return 1;
    }

    odd = n % 10;
    n = n / 10;

    if(odd % 2 == 0) {
        return 0;
    }

    if(n == 0) {
        return 1;
    } else {
        return getPositionAndValue(n);
    }

}

int main() {

    int number;
    int result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = getPositionAndValue(number);

    printf("True: 1 False: 0 Result: %d\n", result);

    return 0;
}
