#include <string.h>

/* Helper function for recursive reversal */
static void reverse_helper(char s[], int left, int right)
{
    if (left >= right) {
        return;
    }
    
    /* Swap characters */
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;
    
    /* Recursive call */
    reverse_helper(s, left + 1, right - 1);
}

/* reverse: reverse string s in place recursively */
void reverse(char s[])
{
    int len = strlen(s);
    if (len > 0) {
        reverse_helper(s, 0, len - 1);
    }
}