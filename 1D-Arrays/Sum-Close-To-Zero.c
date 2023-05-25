#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#define SIZE 4

int main() {

    int elements[SIZE] = {1, -2, 2, 3};
    int index1, index2;
    int sum;
    int min = INT_MAX;

    for(int i = 0; i < SIZE - 1; i++) {
        for(int j = i+1; j < SIZE; j++) {
            sum = abs(elements[i] + elements[j]);
            if(sum == 0 || sum < min) {
                index1 = i;
                index2 = j;
                min = sum;
            }
        }
    }
    printf("Elements %d + %d = %d is closest to 0.\n", elements[index1], elements[index2], min);

    return 0;
}
