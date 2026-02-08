#include <stdio.h>
/* Exercise 1-16: Revise the main routine of the longest-line program
   so it will correctly print the length of arbitrarily long input lines,
   and as much as possible of the text. */

#define MAXLINE 1000

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

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}

main()
{
    int len, max = 0, total;
    char line[MAXLINE], longest[MAXLINE];
    int c;
    
    while ((len = getline(line, MAXLINE)) > 0) {
        total = len;
        
        // If line was truncated, count remaining characters
        if (len == MAXLINE-1 && line[MAXLINE-2] != '\n') {
            while ((c = getchar()) != EOF && c != '\n')
                total++;
            if (c == '\n')
                total++;
        }
        
        if (total > max) {
            max = total;
            copy(longest, line);
        }
    }
    
    if (max > 0) {
        printf("Longest line length: %d\n", max);
        printf("Longest line (or first %d chars):\n%s", MAXLINE-1, longest);
    }
}
