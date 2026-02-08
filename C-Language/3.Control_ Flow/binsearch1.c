#include <stdio.h>

int binsearch(int x, int v[], int n);

int main() {
    int v[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(v) / sizeof(v[0]);
    int x = 7;

    int idx = binsearch(x, v, n);
    printf("Index of %d: %d\n", x, idx);

    return 0;
}

/* binary search with only one test inside the loop */
int binsearch(int x, int v[], int n) {
    int low = 0;
    int high = n - 1;
    int mid;

    while (low < high) {
        mid = (low + high) / 2;
        if (x > v[mid])
            low = mid + 1;
        else
            high = mid;
    }

    return (low < n && v[low] == x) ? low : -1;
}