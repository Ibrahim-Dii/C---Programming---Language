#include <stdio.h>
#define MAXLINE 1000    /* maximum input line length */

int getline(char line[], int maxline);
void reverse(char s[]);

/* reverse input lines */
main()
{
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */
    
    while ((len = getline(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[],int lim)
{
    int c, i;
    
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* reverse: reverse string s in place */
void reverse(char s[])
{
    int i, j;
    char temp;
    
    i = 0;
    while (s[i] != '\0' && s[i] != '\n')  /* find end (before \n or \0) */
        ++i;
    
    if (i > 0 && s[i] == '\n')
        --i;  /* don't reverse the newline */
    
    j = 0;
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}