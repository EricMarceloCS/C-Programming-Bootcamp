#include <stdio.h>
#include <stdlib.h>

int main() {

    int year;

    printf("Enter a year to check if it is a leap year: ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0)
        printf("Year %d is a leap year.\n", year);
    else if(year % 100 == 0 && year % 400 == 0)
        printf("Year %d is a leap year.\n", year);
    else
        printf("Year %d is not a leap year.\n", year);
    return 0;
}
