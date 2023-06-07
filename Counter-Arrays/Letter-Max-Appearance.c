#include <stdio.h>

#define SIZE 8

int main() {

    char array[SIZE] = {'K', 'O', 'c', 'R', 'C', ' ', 'K', 'r'};
    int counter[58] = {0};
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
