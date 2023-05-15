#include <stdio.h>
#include <stdlib.h>

int main() {

    int grade = -1;

    do {
        printf("Enter a grade between 0 and 100: ");
        scanf("%d", &grade);
    }while(grade < 0 || grade > 100);

    printf("Thanks! You've inserted %d, which is a legitimate grade.\n", grade);


    return 0;
}
