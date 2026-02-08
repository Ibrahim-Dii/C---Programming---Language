#include <stdio.h>

int main() {
    unsigned int u = ~0;      // all bits set
    int i = u >> 1;           // max signed int

    printf("Computed int max: %d\n", i);
    printf("Computed int min: %d\n", -i - 1);
    printf("Computed unsigned int max: %u\n", u);

    return 0;
}