#include <stdio.h>

int getPell(int index) {

    if(index == 0) {
        return 0;
    } else if( index == 1) {
        return 1;
    } else {
        return 2 * getPell(index - 1) + getPell(index - 2);
    }
}

int main() {

    int index;
    int pell;

    printf("Enter the index of the Pell Sequence: ");
    scanf("%d", &index);
    pell = getPell(index);
    printf("The Pell Number at index %d is %d.\n", index, pell);

    return 0;
}
