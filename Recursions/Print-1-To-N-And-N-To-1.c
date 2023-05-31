#include <stdio.h>

void printOneToN(int n) {

    if( n >= 1) {
        printOneToN(n-1);
        printf("%d ", n);
    }

}

void printNToOne(int n) {

    if( n >= 1) {
        printf("%d ", n);
        printNToOne(n-1);
    }
}

void printViceVersa(int n) {

    if( n == 1) {
        printf("%d ", n);
    } else if (n > 1) {
        printf("%d ", n);
        printViceVersa(n-1);
        printf("%d ", n);
    }

}

int main() {

    int maxNumber;

    printf("Enter the maximum number: ");
    scanf("%d", & maxNumber);

    printOneToN(maxNumber);
    printf("\n");
    printNToOne(maxNumber);
    printf("\n");
    printViceVersa(maxNumber);
    printf("\n");

    return 0;
}
