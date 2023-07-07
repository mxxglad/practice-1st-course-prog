#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    float length;

    printf("Enter x1, y1, x2, y2 (separate the numbers with spaces): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Length of vector: %.6f\n", length);

    return 0;
}
