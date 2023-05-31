#include <stdio.h>

int getLucas(int index) {

    if(index == 0) {
        return 2;
    } else if (index == 1) {
        return 1;
    } else {
        return getLucas(index - 1) + getLucas(index - 2);
    }
}

int main() {

    int index;
    int lucas;

    printf("Enter the Lucas index: ");
    scanf("%d", &index);
    lucas = getLucas(index);

    printf("The Lucas number of index %d is %d.\n", index, lucas);

    return 0;
}
