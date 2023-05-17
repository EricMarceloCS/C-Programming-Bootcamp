#include <stdio.h>
#include <stdlib.h>

int getFactorial(int number){

    if(number < 0){
        return -1;
    }

    int result = 0;

    while(number >= 1) {
        result *= number;
        number--;
    }

    return result;
}

int main() {

    int number, result;

    printf("Enter a number to calculate its' factorial: ");
    scanf("%d", &number);

    result = getFactorial(number);

    printf("The factorial of %d is %d\n", number, result);
    return 0;
}
