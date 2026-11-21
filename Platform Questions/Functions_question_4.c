#include <stdio.h>

int isPerfectSquare(long long n) {
    long long lo = 0, hi = 3037000499LL, mid;
    if (n < 0) return 0;
    while (lo <= hi) {
        mid = lo + (hi - lo) / 2;
        if (mid * mid == n) return 1;
        if (mid * mid < n) lo = mid + 1;
        else hi = mid - 1;
    }
    return 0;
}

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;
    printf("%d\n", isPerfectSquare(n));
    return 0;
}