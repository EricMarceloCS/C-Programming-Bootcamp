#include <stdio.h>
#include <stdlib.h>

int main() {

    int grade = 0;
    int numClasses = -1;
    int total = 0;

    while(grade != -1){
        total = total + grade;
        numClasses++;
        printf("Enter grade or -1 to stop: ");
        scanf("%d", &grade);
    }

    if(numClasses == 0 )
        printf("Average Grade for %d classes: 0\n", numClasses);
    else
        printf("Average grade for %d classes: %d\n", numClasses,
         total / numClasses);

    return 0;
}
