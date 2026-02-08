
   #include <stdio.h>

int bitcount(unsigned x);

int main() {
    unsigned x = 29;
    printf("%d\n", bitcount(x));
    return 0;
}

int bitcount(unsigned x) {
    int count = 0;
    while (x != 0) {
        x = x & (x - 1);
        count++;
    }
    return count;
    
}
/*
 
 * Exercise 2-9:
 *
 * Observation:
 * In a two's complement system, for any integer x:
 *      x & (x - 1)
 * deletes the rightmost 1-bit of x.
 *
 * Why?
 * 1. Consider x in binary. The rightmost 1-bit is the least significant
 *    bit that is set to 1.
 * 2. Subtracting 1 flips that rightmost 1-bit to 0 and flips all bits
 *    to its right (if any).
 * 3. ANDing x with (x-1) keeps all the bits except the rightmost 1-bit,
 *    effectively removing it.
 
*\