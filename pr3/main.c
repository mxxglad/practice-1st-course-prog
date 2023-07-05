#include <stdio.h>

int countNumbers(int p) {
    if (p < 1) {
        return 0;
    }

    else if (p == 1) {
        return 1;
    }

    int count = 1;

    for (int i = 1; i < p; i++) {
        count *= 2;
    }

    count += 2;

    return count;
}

int main() {
    int p;
    printf("p: ");
    scanf("%d", &p);

    long long result = countNumbers(p);
    printf("Count of numbers %d: %lld\n", p, result);

    return 0;
}
