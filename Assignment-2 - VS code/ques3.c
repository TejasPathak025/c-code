#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    long long *m = malloc((size_t)n * n * sizeof(long long));
    if (!m) return 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%lld", &m[i * n + j]);

    int symmetric = 1;

    for (int i = 0; i < n && symmetric; i++) {
        for (int j = i + 1; j < n; j++) {
            if (m[i * n + j] != m[j * n + i]) {
                symmetric = 0;
                break;
            }
        }
    }

    printf("%s\n", symmetric ? "YES" : "NO");
    free(m);
    return 0;
}