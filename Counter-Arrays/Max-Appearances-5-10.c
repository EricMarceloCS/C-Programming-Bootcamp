#include <stdio.h>

#define SIZE 8

int main() {

    int array[SIZE] = {7, 5, 6, 9, 6, 7, 10, 7};
    int counter[6] = {0};
    int value = 0;
    int maxAppearances = 0;

    for(int i = 0; i < SIZE; i++) {
        int index = array[i] - 5;
        counter[index]++;
        if(counter[index] > maxAppearances) {
            maxAppearances = counter[index];
            value = index + 5;
        }
    }

    printf("Value: %d Max Appearances: %d\n", value, maxAppearances);


    return 0;
}
