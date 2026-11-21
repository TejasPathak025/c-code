// GCD_using_Euclids_algorithm
#include <stdio.h>

long long gcd(long long a, long long b) {
    long long t;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) return 1;
    printf("%lld\n", gcd(a, b));
    return 0;
}