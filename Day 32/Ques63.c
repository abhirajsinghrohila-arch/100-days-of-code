//Q63: Merge two arrays.
#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    if (scanf("%d", &m) != 1 || m < 0) return 0;
    int b[m];
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int c[n + m];
    for (int i = 0; i < n; i++) c[i] = a[i];
    for (int i = 0; i < m; i++) c[n + i] = b[i];

    for (int i = 0; i < n + m; i++) {
        if (i) printf(" ");
        printf("%d", c[i]);
    }
    printf("\n");
    return 0;
}


