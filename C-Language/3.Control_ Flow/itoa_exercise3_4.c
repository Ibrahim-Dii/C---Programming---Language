#include <stdio.h>
#include <limits.h>

/* 
 * Exercise 3-4:
 * In two's complement, the largest negative number is n = -2^(wordsize-1)
 * For 32-bit int, that's -2147483648.
 * Our usual itoa fails for this number because we try to do n = -n,
 * which overflows, since the positive range is smaller (0 to 2147483647).
 * 
 * Solution:
 * Use unsigned int to hold the absolute value.
 * Convert digits using unsigned arithmetic.
 * This works for any machine and any int size.
 */

void itoa(int n, char s[]);

int main() {
    char s[20];

    int n1 = -2147483648; // largest negative number
    int n2 = 12345;

    itoa(n1, s);
    printf("%d as string: %s\n", n1, s);

    itoa(n2, s);
    printf("%d as string: %s\n", n2, s);

    return 0;
}

/* itoa: convert integer n to string s */
void itoa(int n, char s[]) {
    int i = 0;
    unsigned int num;

    // handle negative numbers safely
    if (n < 0) {
        s[i++] = '-';
        num = (unsigned int)(-(n + 1)) + 1; // prevents overflow for INT_MIN
    } else {
        num = (unsigned int)n;
    }

    // convert digits in reverse order
    int start = i;
    do {
        s[i++] = (num % 10) + '0';
        num /= 10;
    } while (num > 0);

    s[i] = '\0';

    // reverse the digits
    int j = start, k = i - 1;
    while (j < k) {
        char tmp = s[j];
        s[j] = s[k];
        s[k] = tmp;
        j++;
        k--;
    }
}