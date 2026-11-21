#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    long long *rowSum = calloc(r, sizeof(long long));
    long long *colSum = calloc(c, sizeof(long long));
    if (!rowSum || !colSum) return 1;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            long long x;
            scanf("%lld", &x);
            rowSum[i] += x;
            colSum[j] += x;
        }
    }

    for (int i = 0; i < r; i++)
        printf("%lld%c", rowSum[i], i == r - 1 ? '\n' : ' ');

    for (int j = 0; j < c; j++)
        printf("%lld%c", colSum[j], j == c - 1 ? '\n' : ' ');

    free(rowSum);
    free(colSum);
    return 0;
}