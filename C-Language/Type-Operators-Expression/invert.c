#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
    unsigned x = 218;

    printf("Result: %u\n", invert(x, 4, 3));

    return 0;
}

unsigned invert(unsigned x, int p, int n) {
    unsigned mask;

    mask = ((1U << n) - 1) << (p + 1 - n);

    return x ^ mask;
}