#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    float distance;
    int intersectionPoints;

    printf("Enter x1, y1, r1, x2, y2, r2: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);


    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


    if (distance == 0 && r1 == r2) {
        intersectionPoints = -1;
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        intersectionPoints = 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        intersectionPoints = 1;
    } else {
        intersectionPoints = 2;
    }

    printf("Number of intersection points: %d\n", intersectionPoints);

    return 0;
}
