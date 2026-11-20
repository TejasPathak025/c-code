#include <stdio.h>

long long countMultiples(long long n, long long k) {
    if (n < 1 || k < 1) return 0;
    return n / k;
}

int main() {
    long long n, k;
    if (scanf("%lld %lld", &n, &k) != 2) return 1;
    printf("%lld\n", countMultiples(n, k));
    return 0;
}
