#include <stdio.h>

int main() {
    int n, d, i;
    scanf("%d %d", &n, &d);
    static int a[100000];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[(i + d) % n]);
    }
    return 0;
}
