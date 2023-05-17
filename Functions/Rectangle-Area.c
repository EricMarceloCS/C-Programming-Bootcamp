#include <stdio.h>
#include <stdlib.h>

double getRectangleArea(double height, double width) {

    double area;

    area = height * width;

    return area;
}

int main() {

    double height, width, area;

    printf("Enter the height of the rectangle: ");
    scanf("%lf", &height);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    area = getRectangleArea(height, width);

    printf("The area of a rectangle %lf by %lf is %lf.\n", height, width, area);

    return 0;
}
