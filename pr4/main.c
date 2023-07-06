#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the n number: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; i++) {
        if (n%i == n/i) {
            count++;
        }
    }

    printf("The number of equal divisors of number n: %u\n", count);

    return 0;
}
