#include <stdio.h>

#define SIZE 8

int main() {

    char array[SIZE] = {'k', 'i', 'b', 'r', 'c', 'k', 'z', 'm'};
    int counter[26] = {0};
    char letter = '\0';
    int maxAppearances = 0;

    for(int i = 0; i < SIZE; i++) {
        char src = array[i];
        counter[src - 'a']++;
        if(counter[src - 'a'] > maxAppearances) {
            maxAppearances = counter[src-'a'];
            letter = src;
        }
    }

    printf("Character: %c Max Appearances: %d\n", letter, maxAppearances);

    return 0;
}
