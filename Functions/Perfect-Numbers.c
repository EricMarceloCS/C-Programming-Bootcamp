#include <stdio.h>

int isPerfectNumber(int number) {
    int perfect = 0;
    int sum = 1;

    for(int i = 2; i*i <= number; i++){
        if(number % i == 0 ){
            sum = sum + i + number/i;
        }
    }

    if(sum == number) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int number;
    int perfect;

    printf("Enter a number to see if it is perfect: ");
    scanf("%d", &number);

    perfect = isPerfectNumber(number);
    printf("Is %d a perfect number? %d.\n", number, perfect);


    return 0;
}
