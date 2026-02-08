#include <stdio.h>
/* Exercise 1-17: Write a program to print all lines that are longer than 80 characters. */

#define MAXLINE 1000
#define MINLEN  80

int getline(char line[], int maxline)
{
    int c, i;
    
    for (i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    
    return i;
}

main()
{
    int len;
    char line[MAXLINE];
    
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > MINLEN)
            printf("%s", line);
    }
}