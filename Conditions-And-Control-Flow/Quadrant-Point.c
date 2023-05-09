#include <stdio.h>
#include <stdlib.h>

int main() {

    int xValue;
    int yValue;

    printf("Enter the x and y coordinates: \n");
    printf("X: ");
    scanf("%d", &xValue);
    printf("y: ");
    scanf("%d", &yValue);

    if(xValue > 0 && yValue > 0)
        printf("(%d, %d): 1st Quadrant\n", xValue, yValue);
    else if (xValue < 0 && yValue > 0)
        printf("(%d, %d): 2nd Quadrant\n", xValue, yValue);
    else if (xValue < 0 && yValue < 0)
        printf("(%d, %d): 3rd Quadrant\n", xValue, yValue);
    else if (xValue > 0 && yValue < 0)
        printf("(%d, %d): 4th Quadrant\n", xValue , yValue);
    else
        printf("The coordinate is not in a quadrant.\n");

    return 0;
}
