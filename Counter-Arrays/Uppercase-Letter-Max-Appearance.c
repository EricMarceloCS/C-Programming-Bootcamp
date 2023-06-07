#include <stdio.h>

#define SIZE 8

int main() {

    char array[SIZE] = {'K', 'I', 'B', 'R', 'C', 'K', 'Z', 'M'};
    int counter[26] = {0};
    char letter = '\0';
    int maxAppearances = 0;

    for(int i = 0; i < SIZE; i++) {
        char src = array[i];
        counter[src - 'A']++;
        if(counter[src - 'A'] > maxAppearances) {
            maxAppearances = counter[src-'A'];
            letter = src;
        }
    }

    printf("Character: %c Max Appearances: %d\n", letter, maxAppearances);

    return 0;
}
