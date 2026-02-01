#include <stdio.h>
#define MAXLINE 1000    /* maximum input line length */

int getline(char line[], int maxline);
int remove_trailing(char s[]);

/* remove trailing blanks and tabs, delete blank lines */
main()
{
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */
    
    while ((len = getline(line, MAXLINE)) > 0) {
        len = remove_trailing(line);
        if (len > 0)    /* only print non-empty lines */
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

/* remove_trailing: remove trailing blanks and tabs from s */
int remove_trailing(char s[])
{
    int i;
    
    i = 0;
    while (s[i] != '\n' && s[i] != '\0')  /* find end of string */
        ++i;
    
    --i;  /* back off from '\n' or '\0' */
    
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    
    if (i >= 0) {  /* non-empty line */
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    } else {       /* empty line */
        s[0] = '\0';
        i = 0;
    }
    
    return i;
}