#include <stdio.h>
#include <stdlib.h>

void getMaxOfTwoDigit(int number){

    int digit1, digit2;

    digit1 = number / 10;
    digit2 = number % 10;

    if(digit1 > 9 || digit1 < 1){
        printf("Error! Not 2-digit number.\n");
    }else if(digit1 > digit2){
        printf("Maximum digit = %d\n", digit1);
    }else {
        printf("Maximum digit = %d\n", digit2);
    }

    return;
}

int main(){

    int number;

    printf("Enter a two digit number to recieve the maximum of the two: ");
    scanf("%d", &number);

    getMaxOfTwoDigit(number);

    return 0;
}
