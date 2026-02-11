#include <ctype.h>

int lower(int c)
{
    return isupper(c) ? tolower(c) : c;
}