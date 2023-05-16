#include <stdio.h>
#include <stdlib.h>

int main() {

    int end;
    int current = 3;
    int sum = 0;

    printf("Enter the number to terminate the calculation: ");
    scanf("%d", &end);

    while(current <= end){
        if(current % 3 == 0 && current % 5 != 0){
            sum += current;
        }
        current += 3;
    }

    current = 5;
    while(current <= end){
        if(current % 5 == 0){
            sum += current;
        }
        current += 5;
    }


    printf("Sum: %d\n", sum);

    return 0;
}
