#include <string.h>

/* rindex: return position of rightmost occurrence of t in s, or -1 */
int rindex(const char s[], const char t[])
{
    int i, j, k;
    int last_pos = -1;
    
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0') {
            last_pos = i;  /* Found a match starting at position i */
        }
    }
    return last_pos;
}