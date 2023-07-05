#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, i;
    printf("Count of numbers: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Numbers (separate w/ spaces): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];

    for (i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Least common multiple: %d\n", result);

    return 0;
}
