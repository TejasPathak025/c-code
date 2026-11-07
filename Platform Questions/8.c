#include <stdio.h>

int main() {
    int n, grades[60];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    for (int i = 0; i < n; i++) {
        if (grades[i] >= 38 && grades[i] % 5 >= 3) {
            grades[i] = grades[i] + (5 - grades[i] % 5);
        }

        printf("%d\n", grades[i]);
    }

    return 0;
}
