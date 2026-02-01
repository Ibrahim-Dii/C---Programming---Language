# 1.8 Arguments - Call by Value

This section explains that C passes arguments by value.

## Files:
- `power_optimized.c`: Optimized power function using call by value

## Key Concepts:
- Arguments are passed by value (copied)
- Parameters are local variables initialized with argument values
- Changes to parameters don't affect original variables
- Call by value enables treating parameters as local variables
- Arrays are exception (passed by reference)

## Example:
```c
/* n is modified inside function but doesn't affect caller's variable */
int power(int base, int n)
{
    int p;
    for (p = 1; n > 0; --n)  /* n can be modified */
        p = p * base;
    return p;
}