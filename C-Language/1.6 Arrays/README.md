# 1.6 Arrays

This section introduces arrays for storing collections of data.

## Files:
- `digit_count.c`: Count digits, whitespace, and other characters
- `word_length_histogram_horizontal.c`: Horizontal histogram of word lengths (Exercise 1-13)
- `word_length_histogram_vertical.c`: Vertical histogram (more challenging)
- `char_frequency_histogram.c`: Histogram of character frequencies (Exercise 1-14)

## Key Concepts:
- Array declaration: `int ndigit[10];`
- Array indexing: `ndigit[0]` to `ndigit[9]`
- Character arithmetic: `c - '0'` converts digit char to integer
- Multi-way decision with `if-else if-else`
- Histogram visualization

## Compilation:
```bash
cc digit_count.c -o digitcount
./digitcount < input.txt