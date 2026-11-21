#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        printf("None\n");
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

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            long long v = m[i * c + j];
            int isRowMin = 1, isColMax = 1;

            for (int k = 0; k < c; k++)
                if (m[i * c + k] < v) { isRowMin = 0; break; }

            for (int k = 0; k < r; k++)
                if (m[k * c + j] > v) { isColMax = 0; break; }

            if (isRowMin && isColMax) {
                printf("%d %d %lld\n", i, j, v);
                free(m);
                return 0;
            }
        }
    }

    printf("None\n");
    free(m);
    return 0;
}