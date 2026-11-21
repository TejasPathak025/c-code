#include <stdio.h>

int beautifulDays(int i, int j, int k) {
    int count = 0;
    int n, r, t, d;
    for (n = i; n <= j; n++) {
        r = 0;
        t = n;
        while (t > 0) {
            r = r * 10 + t % 10;
            t /= 10;
        }
        d = n - r;
        if (d < 0) d = -d;
        if (d % k == 0) count++;
    }
    return count;
}

int main() {
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);
    printf("%d", beautifulDays(i, j, k));
    return 0;
}
