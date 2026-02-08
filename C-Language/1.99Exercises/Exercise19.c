#include <stdio.h>
/* Exercise 1-19: Write a program to reverse each line of input. */
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

void reverse(char s[])
{
    int i, j;
    char temp;
    
    // Find end of string (excluding newline)
    i = 0;
    while (s[i] != '\0' && s[i] != '\n')
        i++;
    
    if (i > 0 && s[i] == '\n')
        i--;  // Don't reverse the newline
    
    // Reverse the string
    j = 0;
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        j++;
        i--;
    }
}

main()
{
    char line[MAXLINE];
    
    while (getline(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }
}