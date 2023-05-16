#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int main() {

    int size;
    int count = 0;
    int previous = INT_MIN;
    int current = 0;
    bool ascending = true;

    printf("Enter the size of numbers greater than 0 to test: ");
    scanf("%d", &size);

    while(count++ < size){
        printf("Enter a number to the sequence: ");
        scanf("%d", &current);
        if(current <= previous){
            ascending = false;
        }
        previous = current;

    }

    if(ascending)
        printf("Very Ascending\n");
    else
        printf("NOT Very Ascending\n");


    return 0;
}
