#include <stdio.h>
#define SIZE 8

int main() {

    int array[SIZE] = {0, 5, 4, 2, 1, 3, 2, 0};
    int counter[6] = {0};

    for(int i = 0; i < SIZE; i++) {
        counter[array[i]]++;
    }

    for(int i = 0; i < 6; i++) {
        printf("%d = %d\n", i, counter[i]);
    }

    return 0;
}
