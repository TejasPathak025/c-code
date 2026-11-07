#include <stdio.h>

int main() {
    int n, r, j, i, k;
    scanf("%d", &n);

    k = (n + 1) / 2;  

    for (r = 1; r <= n; r++) {
       
        if (r <= k) {
            i = r;
        } else {
            i = n - r + 1;
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 1; j <= 2 * (k - i) + 1; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
