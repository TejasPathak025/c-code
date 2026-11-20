// Pythagorean_triples_up_to_N
#include <stdio.h>

int main() {
    long long n, a, b, c, found = 0;
    if (scanf("%lld", &n) != 1) return 1;
    for (a = 1; a <= n; a++) {
        for (b = a + 1; b <= n; b++) {
            for (c = b + 1; c <= n; c++) {
                if (a * a + b * b == c * c) {
                    printf("%lld %lld %lld\n", a, b, c);
                    found = 1;
                }
            }
        }
    }
    if (!found) printf("None\n");
    return 0;
}
