# 1.5 Character Input and Output

This section covers character-level I/O using getchar() and putchar().

## Subdirectories:

### 1.5.1 File Copying
- `file_copy_v1.c`: Basic file copy with explicit EOF check
- `file_copy_v2.c`: Compact version with assignment in condition
- `eof_value.c`: Prints the value of EOF

### 1.5.2 Character Counting
- `char_count_v1.c`: Count characters using while loop
- `char_count_v2.c`: Count characters using for loop with null statement
- `char_count_double.c`: Use double for larger counts

### 1.5.3 Line Counting
- `line_count.c`: Count lines in input
- `blank_tab_newline_count.c`: Count blanks, tabs, and newlines (Exercise 1-8)
- `compress_blanks.c`: Replace multiple blanks with single blank (Exercise 1-9)
- `visible_tabs_backspaces.c`: Make tabs and backspaces visible (Exercise 1-10)

### 1.5.4 Word Counting
- `word_count.c`: Count lines, words, and characters
- `word_per_line.c`: Print one word per line (Exercise 1-12)
- `test_cases.txt`: Sample input for testing

## Key Concepts:
- `getchar()`: Read one character
- `putchar()`: Write one character
- EOF: End-of-file indicator
- Character constants: `'A'`, `'\n'`, `'\t'`
- Logical operators: `&&` (AND), `||` (OR)
- State machines for word counting

## Testing:
```bash
# Test file copy
cc file_copy_v2.c -o copy
./copy < input.txt

# Test word count
cc word_count.c -o wc
./wc < test_cases.txt