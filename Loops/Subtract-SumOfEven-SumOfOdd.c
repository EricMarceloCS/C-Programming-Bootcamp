#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;
    int evenDigitSum = 0;
    int oddDigitSum = 0;
    int digit;

    printf("Enter a number to see the difference between the even sum and odd sum: ");
    scanf("%d", &number);

    while(number > 0){
        digit = number % 10;
        if(digit % 2 == 0){
            evenDigitSum += digit;
        }else{
            oddDigitSum += digit;
        }
        number = number / 10;
    }

    printf("Even Sum - Odd Sum = %d\n", evenDigitSum - oddDigitSum);

    return 0;
}
