#include <stdio.h>

int main() {

    double height;
    double width;

    printf("Enter Height: ");
    scanf("%lf", &height);
    printf("Enter Width: ");
    scanf("%lf", &width);

    printf("Rectange Area: %.2lf\n", height * width);

    return 0;
}
