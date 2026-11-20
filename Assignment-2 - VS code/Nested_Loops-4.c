// Pairs_with_equal_digit_sums
#include <stdio.h>
#include <stdlib.h>

int digitSum(long long x) {
    int s = 0;
    if (x < 0) x = -x;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n, i, j;
    long long count = 0;
    int *s;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 0) return 1;
    s = (int *)malloc((n > 0 ? n : 1) * sizeof(int));
    if (s == NULL) return 1;
    for (i = 0; i < n; i++) {
        long long v;
        if (scanf("%lld", &v) != 1) {
            free(s);
            return 1;
        }
        s[i] =
