#include <stdio.h>
/* Exercise 1-18: Write a program to remove trailing blanks and tabs from each line of input,
   and to delete entirely blank lines. */
   
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

int trim(char line[])
{
    int i = 0;
    
    // Find the end of the string
    while (line[i] != '\0' && line[i] != '\n')
        i++;
    
    // Back up before newline or null
    i--;
    
    // Remove trailing blanks and tabs
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
        i--;
    
    // Reconstruct the line
    if (i >= 0) {
        i++;
        line[i] = '\n';
        i++;
        line[i] = '\0';
        return i;
    }
    else {
        line[0] = '\0';
        return 0;
    }
}

main()
{
    int len;
    char line[MAXLINE];
    
    while ((len = getline(line, MAXLINE)) > 0) {
        len = trim(line);
        if (len > 0)
            printf("%s", line);
    }
}