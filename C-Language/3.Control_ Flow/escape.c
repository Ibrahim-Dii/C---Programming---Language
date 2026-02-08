#include <stdio.h>

void escape(char s[], const char t[]);
void unescape(char s[], const char t[]);

int main() {
    char t[] = "Hello\tWorld\nThis is a test";
    char s[100];
    char u[100];

    escape(s, t);
    printf("Escaped: %s\n", s);

    unescape(u, s);
    printf("Unescaped: %s\n", u);

    return 0;
}

/* Convert real characters to visible escape sequences */
void escape(char s[], const char t[]) {
    int i = 0, j = 0;
    char c;
    while ((c = t[i++]) != '\0') {
        switch (c) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\\':
                s[j++] = '\\';
                s[j++] = '\\';
                break;
            default:
                s[j++] = c;
        }
    }
    s[j] = '\0';
}

/* Convert visible escape sequences back to real characters */
void unescape(char s[], const char t[]) {
    int i = 0, j = 0;
    char c;
    while ((c = t[i++]) != '\0') {
        if (c == '\\') {
            switch (t[i]) {
                case 'n':
                    s[j++] = '\n';
                    i++;
                    break;
                case 't':
                    s[j++] = '\t';
                    i++;
                    break;
                case '\\':
                    s[j++] = '\\';
                    i++;
                    break;
                default:
                    s[j++] = '\\';
                    // leave unknown escape as is
            }
        } else {
            s[j++] = c;
        }
    }
    s[j] = '\0';
}