#include <stdio.h>

void itoa(int n, char s[], int w);

int main() {
    char s[20];

    itoa(123, s, 5);
    printf("'%s'\n", s);  // output: '  123'

    itoa(-45, s, 6);
    printf("'%s'\n", s);  // output: '   -45'

    return 0;
}

void itoa(int n, char s[], int w) {
    int i = 0;
    unsigned int num = (n < 0) ? -n : n;
    if (n < 0) s[i++] = '-';

    int start = i;
    do {
        s[i++] = (num % 10) + '0';
        num /= 10;
    } while (num > 0);

    s[i] = '\0';

    int j = (s[0] == '-') ? 1 : 0, k = i - 1;
    while (j < k) {
        char tmp = s[j]; s[j] = s[k]; s[k] = tmp;
        j++; k--;
    }

    // add padding if needed
    int len = i;
    if (len < w) {
        for (int p = w; p > len; p--) {
            for (int q = w-1; q >= 1; q--) s[q] = s[q-1];
            s[0] = ' ';
        }
    }
}