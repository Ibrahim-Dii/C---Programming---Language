#include <stdio.h>

int htoi(char s[]);

int main() {
    char hex[] = "0x1A3f";

    printf("Hexadecimal: %s\n", hex);
    printf("Integer value: %d\n", htoi(hex));

    return 0;
}

int htoi(char s[]) {
    int i = 0;
    int n = 0;
    int value;

    if (s[i] == '0' && (s[i + 1] == 'x' || s[i + 1] == 'X'))
        i += 2;

    for (; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9')
            value = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            value = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            value = s[i] - 'A' + 10;
        else
            break;

        n = 16 * n + value;
    }

    return n;
}