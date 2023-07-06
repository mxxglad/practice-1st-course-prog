#include <stdio.h>

int countSequences(int n) {
    int MOD = 12345;

    int dp[n + 1];


    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
    }

    return dp[n];
}

int main() {
    int n;

    printf("Enter the len n: ");
    scanf("%d", &n);

    int result = countSequences(n);

    printf("Number of searched groups: %d\n", result);

    return 0;
}
