#include <stdio.h>
#include <stdlib.h>

int main() {

    int value1, value2, value3;

    printf("Enter three equality test values: ");
    scanf("%d %d %d", &value1, &value2, &value3);

    if(value1 == value2 && value2 == value3)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");
    return 0;
}
