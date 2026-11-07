#include <stdio.h>

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Print hash symbols
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        staircase(n);
    }
    return 0;
}
