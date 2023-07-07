#include <stdio.h>
#include <string.h>
#include <ctype.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int countAnagrams(char word[]) {
    int length = strlen(word);
    int frequency[26] = {0};
    int i, denominator, numerator;


    for (i = 0; i < length; i++) {
        char c = toupper(word[i]);
        if (isalpha(c))
            frequency[c - 'A']++;
    }

    numerator = factorial(length);

    for (i = 0; i < 26; i++) {
        if (frequency[i] > 1) {
            denominator = factorial(frequency[i]);
            numerator /= denominator;
        }
    }

    return numerator;
}

int main() {
    char word[15];

    printf("Enter the word: ");
    scanf("%s", word);

    int count = countAnagrams(word);

    printf("Number of possible anagrams: %d\n", count);

    return 0;
}
