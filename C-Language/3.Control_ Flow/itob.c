#include <stdio.h>

void itob(int n, char s[], int b);

int main() {
    char s[50];
    itob(255, s, 16);
    printf("%s\n", s);
    itob(-255, s, 16);
    printf("%s\n", s);
    return 0;
}

void itob(int n, char s[], int b) {
    int i = 0;
    unsigned int num = (n < 0) ? -n : n;
    if (n < 0) s[i++] = '-';
    do {
        int rem = num % b;
        s[i++] = (rem < 10) ? rem + '0' : rem - 10 + 'A';
        num /= b;
    } while (num > 0);
    s[i] = '\0';

    int j = (s[0] == '-') ? 1 : 0, k = i - 1;
    while (j < k) {
        char tmp = s[j]; s[j] = s[k]; s[k] = tmp;
        j++; k--;
    }
}