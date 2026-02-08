#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() {
    unsigned x = 218;
    unsigned y = 13;

    printf("Result: %u\n", setbits(x, 4, 3, y));

    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned mask;
    unsigned ybits;

    mask = ((1U << n) - 1) << (p + 1 - n);
    ybits = (y & ((1U << n) - 1)) << (p + 1 - n);

    return (x & ~mask) | ybits;
}