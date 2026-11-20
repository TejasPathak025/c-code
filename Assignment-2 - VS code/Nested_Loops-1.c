// Count_pairs_with_a_target_sum
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    long long target, count = 0;
    long long *a;
    if (scanf("%d %lld", &n, &target) != 2) return 1;
    if (n < 0) return 1;
    a = (long long *)malloc((n > 0 ? n : 1) * sizeof(long long));
    if (a == NULL) return 1;
    for (i = 0; i < n; i++) {
        if (scanf("%lld", &a[i]) != 1) {
            free(a);
            return 1;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) count++;
        }
    }
    printf("%lld\n", count);
    free(a);
    return 0;
}
