#include <stdio.h>

int getSumOfDivisors(int number) {
    int sum = 0;

    for(int i = 1; i*i <= number; i++){
        if(number % i == 0 && i * i != number){
            sum = sum + i + number / i;
        }
        if(i*i == number){
            sum += i;
        }
    }

    return sum;
}

int main() {

    int number;
    int sum;

    printf("Enter a number to get the sum of its devisors: ");
    scanf("%d", &number);

    sum = getSumOfDivisors(number);
    printf("Sum of the divisors of %d is %d.\n", number, sum);


    return 0;
}
