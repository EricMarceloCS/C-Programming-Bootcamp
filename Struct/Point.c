#include <stdio.h>

typedef struct point {
    int x;
    int y;
}Point;

void printPoint(Point point) {
    printf("X: %d Y: %d\n", point.x, point.y);
}

Point setPoint() {

    Point point;
    printf("Enter point X: ");
    scanf("%d", &point.x);
    printf("Enter point Y: ");
    scanf("%d", &point.y);

    return point;
}

int main() {

    printPoint(setPoint());

    return 0;
}
