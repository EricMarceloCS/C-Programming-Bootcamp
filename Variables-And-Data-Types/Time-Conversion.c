#include <stdio.h>

int main() {

    int input;
    int hours;
    int minutes;
    int seconds;

    printf("Enter the total number of seconds to be converted: ");
    scanf("%d", &input);

    hours = input / 3600;
    input = input % 3600;

    minutes = input / 60;
    seconds = input % 60;

    printf("%02d : %02d : %02d\n", hours, minutes, seconds);


    return 0;
}
