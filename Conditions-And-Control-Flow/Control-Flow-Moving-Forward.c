#include <stdio.h>
#include <stdlib.h>

int main() {

    double grade;

    printf("Please, enter you score: ");
    scanf("%lf", &grade);

    if(grade >= 80)
        printf("Excellent Job!\n");
    else  if (grade >= 60)
        printf("Not bad.\n");
    else
        printf("Oh, you did not pass...\n");

    return 0;
}
