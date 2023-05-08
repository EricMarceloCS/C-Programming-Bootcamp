#include <stdio.h>
#include <stdlib.h>

int main() {

    int value1, value2;

    printf("Enter two equality test values: ");
    scanf("%d %d", &value1, &value2);

    if(value1 == value2)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");
    return 0;
}
