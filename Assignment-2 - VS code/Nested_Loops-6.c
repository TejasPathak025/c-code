#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("0\n");
        return 0;
    }

    long long *a = malloc(n * sizeof(long long));
    if (!a) return 1;

    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    int best = 1, cur = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1])
            cur++;
        else
            cur = 1;
        if (cur > best) best = cur;
    }

    printf("%d\n", best);
    free(a);
    return 0;
}
