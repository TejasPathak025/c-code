#include <stdio.h>

#define MAX_SUM 200  /* 19 digits * 9 = 171 max for 64-bit values */

static int digit_sum(long long x) {
    /* Use unsigned magnitude so LLONG_MIN doesn't overflow on negation */
    unsigned long long u = (x < 0) ? (unsigned long long)(-(x + 1)) + 1ULL
                                   : (unsigned long long)x;
    int s = 0;
    while (u > 0) {
        s += (int)(u % 10);
        u /= 10;
    }
    return s;
}

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1 || n < 2) {
        printf("0\n");
        return 0;
    }

    long long cnt[MAX_SUM] = {0};
    long long pairs = 0;          /* up to n*(n-1)/2, can exceed 32 bits */

    for (long long i = 0; i < n; i++) {
        long long v;
        if (scanf("%lld", &v) != 1) break;   /* stop on short/bad input */
        int s = digit_sum(v);
        pairs += cnt[s];
        cnt[s]++;
    }

    printf("%lld\n", pairs);
    return 0;
}