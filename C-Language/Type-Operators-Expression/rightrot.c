#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main() {
    unsigned x = 218;
    int n = 3;

    printf("Original x: %u\n", x);
    printf("Right rotated by %d: %u\n", n, rightrot(x, n));

    return 0;
}

unsigned rightrot(unsigned x, int n) {
    int wordsize = sizeof(unsigned) * 8;
    n %= wordsize;

    if (n == 0)
        return x;

    return (x >> n) | (x << (wordsize - n));
}