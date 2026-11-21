#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        printf("0\n");
        return 0;
    }

    long long *m = malloc((size_t)r * c * sizeof(long long));
    if (!m) return 1;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (scanf("%lld", &m[i * c + j]) != 1) {
                free(m);
                return 1;
            }

    int di[4] = {-1, 1, 0, 0};
    int dj[4] = {0, 0, -1, 1};
    int count = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            long long v = m[i * c + j];
            int peak = 1;

            for (int d = 0; d < 4; d++) {
                int ni = i + di[d];
                int nj = j + dj[d];
                if (ni < 0 || ni >= r || nj < 0 || nj >= c)
                    continue;                 /* missing neighbour: ignore */
                if (m[ni * c + nj] >= v) {    /* must be strictly greater */
                    peak = 0;
                    break;
                }
            }
            if (peak) count++;
        }
    }

    printf("%d\n", count);
    free(m);
    return 0;
}