#include <stdio.h>
#include <stdlib.h>

int main() {

    int input;

    printf("Enter a value to evaluate: ");
    scanf("%d", &input);

    if(input < 0)
        printf("-1\n");
    else if (input == 0)
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
