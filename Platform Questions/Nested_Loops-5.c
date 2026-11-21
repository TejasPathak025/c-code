#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) return 0;

    long long *a = malloc(n * sizeof(long long));
    if (!a) return 1;

    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    long long minDiff = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long d = a[i] - a[j];
            if (d < 0) d = -d;
            if (d < minDiff) minDiff = d;
        }
    }

    printf("%lld\n", minDiff);
    free(a);
    return 0;
}