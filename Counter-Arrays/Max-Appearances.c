#include <stdio.h>

#define SIZE 20

void printMaxAppearances(int array[]) {

    int maxAppearances = 0;
    int value = 0;
    int counter[10] = {0};

    for(int i = 0; i < SIZE; i++) {
    int index = array[i];
        counter[index]++;
        if(counter[index] > maxAppearances) {
            maxAppearances = counter[index];
            value = index;
        }
    }

    printf("Value: %d Appearances: %d\n", value, maxAppearances);

}

int main() {

    int array[SIZE];
    int i = 0;
    do {
        printf("Enter a value from 0-9: ");
        scanf("%d", &array[i++]);

    }while(i < SIZE);

    printMaxAppearances(array);

    return 0;
}
