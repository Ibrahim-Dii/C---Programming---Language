#include <stdio.h>
#include <ctype.h>

void expand(const char s1[], char s2[]);

int main() {
    char s1[] = "-a-c0-3z-";
    char s2[100];

    expand(s1, s2);
    printf("Expanded: %s\n", s2);

    return 0;
}

void expand(const char s1[], char s2[]) {
    int i = 0, j = 0;
    char start, end;

    while (s1[i] != '\0') {
        if (s1[i] != '-' || i == 0 || s1[i+1] == '\0') {
            // copy literal character
            s2[j++] = s1[i++];
        } else {
            // handle range a-b
            start = s1[i-1];
            end = s1[i+1];

            // check that range is valid: both letters same case or both digits
            if ((isdigit(start) && isdigit(end)) ||
                (islower(start) && islower(end)) ||
                (isupper(start) && isupper(end))) {

                // expand range
                for (char c = start + 1; c <= end; c++)
                    s2[j++] = c;
                i += 2; // skip '-' and end character
            } else {
                // invalid range, copy '-' literally
                s2[j++] = s1[i++];
            }
        }
    }
    s2[j] = '\0';
}