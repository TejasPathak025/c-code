#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100005];
    if (scanf("%100000s", s) != 1) return 0;

    int len = (int)strlen(s);
    int i = 0;

    while (i < len) {
        int j = i;
        while (j < len && s[j] == s[i])
            j++;
        printf("%c%d", s[i], j - i);
        i = j;
    }

    printf("\n");
    return 0;
}
