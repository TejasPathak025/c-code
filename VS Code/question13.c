#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                printf("X");
            } else {
                printf("O");
            }
        }
        printf("\n");
    }

    return 0;
}
