#include <stdio.h>

int main() {

    double grade;

    printf("Enter your grade: ");
    scanf("%lf", &grade);

    if( grade < 60.00)
        printf("Failed. Try Again.\n");
    else
        printf("Congratulations!\n");

    return 0;
}
