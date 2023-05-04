#include <stdio.h>

int main() {

    double salary;
    double hours;
    double earned;

    printf("Please, enter the hourly salary: ");
    scanf("%lf", &salary);

    printf("Please, enter the monthly number of hours worked: ");
    scanf("%lf", &hours);

    earned = salary * hours;

    printf("Monthly Salary Earned: %.2lf\n", earned);


    return 0;
}
