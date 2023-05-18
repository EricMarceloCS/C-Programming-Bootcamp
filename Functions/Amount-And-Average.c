#include <stdio.h>

double getAmountAverage(int number, int digit){

    double average = 0.00;
    double count = 0.00;
    double sum = 0.00;
    int current = 0;

    while(number > 0){
        current = number % 10;
        if(current < digit){
            count++;
            sum += current;
        }
        number /= 10;
    }
    average = sum / count;
    printf("The number of digits less the %d is %.1lf.\n", digit, count);
    return average;

}

int main() {

    int number, digit;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a digit: ");
    scanf("%d", &digit);

    result = getAmountAverage(number, digit);

    printf("The average of values less than %d in %d is %.2lf.\n", digit, number, result);

    return 0;
}
