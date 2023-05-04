#include <stdio.h>
#include <math.h>

int main() {

    double x1, y1;
    double x2, y2;
    double distance;

    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);

    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    distance = sqrt(pow(x2-x1, 2.0) + pow(y2-y1, 2.0));

    printf("Distance between (%lf, %lf) and (%lf, %lf) is %lf\n", x1, y1, x2, y2, distance);

    return 0;
}
