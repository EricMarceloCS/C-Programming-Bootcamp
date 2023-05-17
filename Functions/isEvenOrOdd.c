#include <stdio.h>
#include <stdlib.h>

int isEven(int number) {

    if(number % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int isOdd(int number){

    if(number % 2 != 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){

    int number;

    printf("Enter an even or odd number: ");
    scanf("%d", &number);

    isEven(number);

    return 0;
}
