#include <stdio.h>

int main()
{
    printf("hello, world\n");
    return 0;
}

/*  Exercise 1-1: Hello World Errors
     Errors when removing parts:

    Remove #include <stdio.h> → Error: printf undeclared

    Remove () after main → Syntax error

    Remove braces {} → Syntax error

    Remove semicolon ; → Syntax error

    Misspell printf → Error: function not found

    Remove \n → Output stays on same line (no error)
    */