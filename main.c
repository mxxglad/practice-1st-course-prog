#include <stdio.h>

int main() {
    int t1, t2, t3;
    float total_time;

    printf("t1: ");
    scanf("%d", &t1);

    printf("t2: ");
    scanf("%d", &t2);

    printf("t3: ");
    scanf("%d", &t3);

    total_time = 1.0 / (1.0/t1 + 1.0/t2 + 1.0/t3);

    printf("Total time: %.2f hour(s)\n", total_time);

    return 0;
}
