#include <stdio.h>

int main() {

    int pullUppsArray[10] = {3, 4, 3, 5, 7, 8, 6, 9, 9, 10};

    for(int i = 9; i >= 0; i--) {
        printf("%d ", pullUppsArray[i]);
    }

    printf("\n");

    return 0;
}
