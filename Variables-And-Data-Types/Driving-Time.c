#include <stdio.h>

int main() {

    double miles;
    double mph;
    double hours;

    printf("Enter the distance in miles: ");
    scanf("%lf", &miles);

    printf("Enter the speed in miles per hour: ");
    scanf("%lf", &mph);

    hours = miles / mph;

    printf("Time to destination: %.1lf hours\n", hours);

    return 0;
}
