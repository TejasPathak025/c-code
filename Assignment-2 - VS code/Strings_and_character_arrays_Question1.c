#include <stdio.h>
#include <ctype.h>

int main(void) {
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    int ch;

    while ((ch = getchar()) != EOF && ch != '\n') {
        if (isalpha((unsigned char)ch)) {
            char c = (char)tolower(ch);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        } else if (isdigit((unsigned char)ch)) {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
        /* anything else (punctuation, tabs, etc.) is ignored */
    }

    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}