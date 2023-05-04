#include <stdio.h>

int main() {

    float height;
    float width;

    printf("Enter Height: ");
    scanf("%f", &height);
    printf("Enter Width: ");
    scanf("%f", &width);

    printf("Rectangle Perimeter: %.2f\n", (height + width) * 2);
    return 0;
}
