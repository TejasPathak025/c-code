bool isPalindrome(char* s) {
    int i = 0, j = 0;
    char a, b;
    while (s[j] != '\0') j++;
    j--;
    while (i < j) {
        while (i < j && !((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))) i++;
        while (i < j && !((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9'))) j--;
        a = s[i];
        b = s[j];
        if (a >= 'A' && a <= 'Z') a += 32;
        if (b >= 'A' && b <= 'Z') b += 32;
        if (a != b) return false;
        i++;
        j--;
    }
    return true;
}
