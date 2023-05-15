#include <stdio.h>
#include <stdlib.h>

int main() {

    int number, power;
    int result = 1;

    printf("Enter a base number: ");
    scanf("%d", &number);
    printf("Enter an exponential power: ");
    scanf("%d", &power);

    for(int i = 0; i < power; i++){
        result = result * number;
    }

    printf("%d ^ %d = %d\n", number, power, result);

    return 0;
}
