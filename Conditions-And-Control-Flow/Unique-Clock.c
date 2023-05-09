#include <stdio.h>
#include <stdlib.h>

int main() {

    int input;
    int hours, minutes, seconds;

    printf("Enter the time in seconds: ");
    scanf("%d", &input);

    hours = input / 3600;
    input = input - (hours * 3600);
    minutes = input / 60;
    seconds = input % 60;

    printf("%02d : %02d : %02d\n", hours, minutes, seconds);

    return 0;

}
